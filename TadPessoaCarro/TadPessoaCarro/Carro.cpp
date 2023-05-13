#include "Carro.hpp"

Carro* cria_carro(double x, double y, double th) {
	Carro* carro = new Carro;
	carro->x = x;
	carro->y = y;
	carro->th = th;
	return carro;
}

double carro_get_x(Carro* carro) { return carro->x;  }
double carro_get_y(Carro* carro) { return carro->y;  }
double carro_get_th(Carro* carro) { return carro->th;  }
void carro_girar(Carro* carro, double w, double t) { carro->th += w * t;  }

//x = Vx * t = v * cos(th) * t
//y = Vy * t = v * sin(th) * y
void carro_mover(Carro* carro, double v, double t) {
	double vel_x = v * cos(carro->th);
	double vel_y = v * sin(carro->th);
	double delta_x = vel_x * t;
	double delta_y = vel_y * t;
	carro->x += delta_x;
	carro->y += delta_y;
}

//ang = arctan(d_y/d_x)
double carro_calcular_angulo_pessoa(Carro* carro, Pessoa* pessoa) {
	double delta_y = pessoa->y - carro->y;
	double delta_x = pessoa->x - carro->x;
	double ang_abs = atan2(delta_y, delta_x);
	double ang_rel = ang_abs - carro->th;
	return ang_rel;
}

double carro_calcular_distancia_pessoa(Carro* carro, Pessoa* pessoa) {
	double delta_y = pessoa->y - carro->y;
	double delta_x = pessoa->x - carro->x;
	return sqrt(delta_x * delta_x + delta_y * delta_y);
}

bool carro_movimentacao_permitida(Carro* carro, Pessoa** pessoas, int n) {
	for (int i = 0; i < n; i++) {
		Pessoa* pessoa = pessoas[i];
		double ang_pessoa_carro = carro_calcular_angulo_pessoa(carro, pessoa);
		double dist_pessoa_carro = carro_calcular_distancia_pessoa(carro, pessoa);
		bool ang_ok = (ang_pessoa_carro >= -45 && ang_pessoa_carro <= 45);
		bool dist_ok = dist_pessoa_carro <= 5;

		if (!ang_ok || !dist_ok) {
			printf("Alerta! %d\t%.2f\t%.2f\n", i, ang_pessoa_carro, dist_pessoa_carro);
			return false;
		}

	}

	return true;
}

void carro_navegar(Carro* carro, Pessoa** pessoas, int n, double w, double t, double v) {
	if (carro_movimentacao_permitida(carro, pessoas, n)) {
		carro_girar(carro, w, t);
		carro_mover(carro, v, t);
	}
}