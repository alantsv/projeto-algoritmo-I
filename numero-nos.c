void numno (**p){
	no p1;
	int cont;
	p1 = *p;
	while (p1->proxno != NULL){
		cont = cont + 1;
	}
	printf("N�mero de n�s: %i", cont);
}