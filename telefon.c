#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void codificare(char *sir ,char *v) { 
    int k = 1, j = 0, i;
	for (i = 0; i < strlen(sir); i++) {
		/*verific daca am litera mare Codul Ascii,
		in caz afirmativ pun '1' in fata.
		*/
		if (sir[i] >= 65 && sir[i] <= 90) {	
	    	v[j++] = '1';
			k = 0;
		}
		/*verific daca am spatiu caz afirmativ
		pun '0' in fata.
		*/
		if (sir[i] == ' ') {
			v[j++] = '0';
			k = 0;
		} else {
			/*in urmatoarele if-uri verific fiecare litera
			in parte, si totodata verific daca a fost accesata 
			tasta corespunzatoare literei, prin variabila contor k.
			Astfel pun toate output-urile in vectorul v.
			*/
			if (sir[i] == 'a' || sir[i] == 'A') {
				if (k == 2){
					v[j++] = '#';
				}
				k = 2;
		    	v[j++] = '2';
		    }
		    if (sir[i] == 'b' || sir[i] == 'B') {
		    	if (k == 2){
					v[j++] = '#';
		    	}
				k = 2;
		    	v[j++] = '2'; 
		    	v[j++] = '2';
		    }
		    if (sir[i] == 'c' || sir[i] == 'C') {
		    	if (k == 2) {
					v[j++] = '#';
		    	}
				k = 2;
		    	v[j++] = '2'; 
		    	v[j++] = '2';
		    	v[j++] = '2';
		    }
		    if (sir[i] == 'd' || sir[i] == 'D') {
		    	if (k == 3) {
					v[j++] = '#';
		    	}
				k = 3;
		    	v[j++] = '3';
		    }
		    if (sir[i] == 'e' || sir[i] == 'E') {
		    	if (k == 3) {
					v[j++] = '#';
		    	}
				k = 3;
		    	v[j++] = '3';
		    	v[j++] = '3';
		    }
		    if (sir[i] == 'f' || sir[i] == 'F') {
		    	if (k == 3) {
					v[j++] = '#';
		    	}
				k = 3;
		    	v[j++] = '3'; 
		    	v[j++] = '3'; 
		    	v[j++] = '3';
		    }
		    if ( sir[i] == 'g' || sir[i] == 'G') {
		    	if ( k==4 ) {
					v[j++] = '#';
		    	}
				k = 4;
		    	v[j++] = '4';
		    }
		    if (sir[i] == 'h' || sir[i] == 'H') {
		    	if (k == 4) {
					v[j++] = '#';
		    	}
				k = 4;
		    	v[j++] = '4';
		    	v[j++] = '4';
		    }
		    if (sir[i] == 'i' || sir[i] == 'I') {
		    	if(k == 4){
					v[j++] = '#';
		    	}
				k = 4;
		    	v[j++] = '4';
		    	v[j++] = '4';
		    	v[j++] = '4';
		    }
		    if ( sir[i] == 'j' || sir[i] == 'J') {
		    	if (k == 5) {
					v[j++] = '#';
		    	}
				k = 5;
		    	v[j++] = '5';
		    }
		    if (sir[i] == 'k' || sir[i] == 'K') {
		    	if (k == 5) {
					v[j++] = '#';
		    	}
				k = 5;
		    	v[j++] = '5';
		    	v[j++] = '5';
		    }
		    if (sir[i] == 'l' || sir[i] == 'L') {
		    	if (k == 5) {
					v[j++] = '#';
		    	}
				k = 5;
		    	v[j++] = '5';
		    	v[j++] = '5';
		    	v[j++] = '5';
		    }
		    if (sir[i] == 'm' || sir[i] == 'M') {
		    	if (k == 6) {
					v[j++] = '#';
		    	}
				k = 6;
		    	v[j++] = '6';
		    }
		    if (sir[i] == 'n' || sir[i] == 'N') {
		    	if (k == 6) {
					v[j++] = '#';
		    	}
				k = 6;
		    	v[j++] = '6';
		    	v[j++] = '6';
		    }
		    if (sir[i] == 'o' || sir[i] == 'O') {
		    	if (k == 6) {
					v[j++] = '#';
		    	}
				k = 6;
		    	v[j++] = '6';
		    	v[j++] = '6';
		    	v[j++] = '6';
		    }
		    if (sir[i] == 'p' || sir[i] == 'P'){
		    	if (k == 7) {
 					v[j++] = '#';
		    	}
				k = 7;
		    	v[j++] = '7';
		    }
		    if (sir[i] == 'q' || sir[i] == 'Q') {
		    	if(k==7) {
					v[j++] = '#';
		    	}
				k = 7;
		    	v[j++] = '7';
		    	v[j++] = '7';
		    }
		    if (sir[i] == 'r' || sir[i] == 'R') {
		    	if (k == 7) {
					v[j++] = '#';
		    	}
				k = 7;
		    	v[j++] = '7';
		    	v[j++] = '7';
		    	v[j++] = '7';
		    }
		    if (sir[i] == 's' || sir[i] == 'S') {
		    	if (k == 7) {
					v[j++] = '#';
		    	}
				k = 7;
		    	v[j++] = '7';
		    	v[j++] = '7';
		    	v[j++] = '7';
		    	v[j++] = '7';
		    }
		    if (sir[i] == 't' || sir[i] == 'T') {
		    	if (k == 8) {
					v[j++] = '#';
		    	}
				k = 8;
		    	v[j++] = '8';
		    }
		    if (sir[i] == 'u' || sir[i] == 'U') {
		    	if ( k==8 ) {
					v[j++] = '#';
		    	}
				k = 8;
		    	v[j++] = '8';
		    	v[j++] = '8';
		    }
		    if (sir[i] == 'v' || sir[i] == 'V') {
		    	if (k == 8){
					v[j++] = '#';
		    	}
				k = 8;
		    	v[j++] = '8';
		    	v[j++] = '8';
		    	v[j++] = '8';
		    }
		    if (sir[i] == 'w' || sir[i] == 'W') {
		    	if (k == 9) {
					v[j++] = '#';
		    	}
				k = 9;
		    	v[j++] = '9';
		    }
		    if (sir[i] == 'x' || sir[i] == 'X') {
		    	if ( k == 9) {
		    		v[j++] = '#';
		    	}
				k = 9;
		    	v[j++] = '9';
		    	v[j++] = '9';
		    }
		    if (sir[i] == 'y' || sir[i] == 'Y') {
		    	if (k == 9) {
					v[j++] = '#';
		    	}
				k = 9;
		    	v[j++] = '9';
		    	v[j++] = '9';
		    	v[j++] = '9';
		    }
		    if (sir[i] == 'z' || sir[i] == 'Z') {
		    	if (k == 9) {
					v[j++] = '#';
		    	}
				k = 9;
		    	v[j++] = '9';
		    	v[j++] = '9';
		    	v[j++] = '9';
		    	v[j++] = '9';
		    }
        }
    }
}

void decodificare(char *v) {
	int i = 0,k = 0,p;
	for (i = 0; i < strlen(v); i++) {
		      p = 1;
        /*
        Fac o substitutie in cazul in care vectorul codificat
		contine mai multe cifre 3 cifre de acelasi fel.
        p este un contor care ma intoarce inapoi daca am depasit
        3 cifre identice.
        Pentru tastele de 3 litere.
        */
		if (v[i] != '7' && v[i] != '9' && v[i] != '1') {
			while(v[i]==v[i+1]){
				p++;
 				if (p == 4) {
 			    	p=1;
 				}
 				i++;
			}
		} else {
			/*
			La fel ca mai sus doar ca pentru tastele de 4 litere
			*/
			if ( v[i] == '7' || v[i] == '9') {
		    	while (v[i] == v[i+1]) {
		    		p++;
		    	if(p == 5){
		    		p=1;
		    	}
		    	i++;
		    	}
		    }
		}
		/*
		verific ce tasta sa apasat si de cate ori
		la output printez in terminal litera corespunzatoare.
		*/
		switch(v[i]){
			case '0':
				printf(" ");
				break;
			case '1':
			/*
			k este contorul care transforma litera
			mica in mare unde ete cazul.
			*/
				if (k == 0) {
					k = 32;
				}
				break;
			case '2':
				if (p == 1) {
					printf("%c",'a' - k);
				}
				if (p == 2) {
					printf("%c",'b' - k);
				}
				if (p == 3) {
					printf("%c",'c' - k);
				}
				k = 0;
				break;
			case '3':
				if (p == 1) {
					printf("%c",'d' - k);
				}
				if (p == 2) {
					printf("%c",'e' - k);
				}
				if ( p==3 ) {
					printf("%c",'f' - k);
				}
				k = 0;
				break;
			case '4':
				if ( p== 1){
					printf("%c",'g' - k);
				}
				if (p == 2) {
					printf("%c",'h' - k);
				}
				if (p == 3) {
					printf("%c",'i' - k);
				}
				k = 0;
				break;

			case '5':
				if (p == 1) {
					printf("%c",'j' - k);
				}
				if (p == 2) {
					printf("%c",'k' - k);
				}
				if (p == 3) {
					printf("%c",'l' - k);
				}
				k = 0;
				break;
			case '6':
				if (p == 1) {
					printf("%c",'m' - k);
				}
				if (p == 2) {
					printf("%c",'n' - k);
				}
				if (p == 3)
					printf("%c",'o' - k);
				k = 0;
				break;
			case '7':
				if (p == 1) {
					printf("%c",'p' - k);
				}
				if (p == 2) {
					printf("%c",'q' - k);
				}
				if (p == 3) {
					printf("%c",'r' - k);
				}
				if (p == 4) {
					printf("%c",'s' - k);
				}
				k = 0;
				break;
			case '8':
				if ( p==1 ) {
					printf("%c",'t' - k);
				}
				if ( p==2 ) {
					printf("%c",'u' - k);
				}
				if (p == 3) {
					printf("%c",'v' - k);
				}
				k = 0;
				break;
			case '9':
				if (p == 1) {
					printf("%c",'w' - k);
				}
				if (p == 2) {
					printf("%c",'x' - k);
				}
				if (p == 3) {
					printf("%c",'y' - k);
				}
				if(p == 4) {
					printf("%c",'z' - k);
				}
				k = 0;
				break;

			default:
				break;
		}
	}
    printf("\n");
}

typedef struct {
	char *c_corect;
	char *c_gresit;
} dictionar;

void auto_corect(dictionar *s, char *a) {

	char v[400];
	fgets(v, 400, stdin);
	int nr, p = 0, i;
	scanf("%d", &nr);
	/*aloc memorie vectorului s*/
    s = malloc(nr * 3 * sizeof(dictionar));

	for (i = 0; i < nr; i++) {
	/*aloc memorie si citesc fiecare cuvant din dictionar.*/	
	    s[i].c_gresit = malloc(100 * sizeof(char));
       	s[i].c_corect = malloc(100 * sizeof(char));
		scanf("%s", s[i].c_gresit);
		scanf("%s", s[i].c_corect);
	}
	/*
	separ cuvintele din textul dat cu strtok;
	*/
    char *cuv;
	char *sep = " \n";
	cuv=strtok(v, sep);
	a[0] = 0;

	while (cuv != NULL) {	
		for (i = 0; i < nr; i++) {	
			/*
			verific daca cuv din textul dat se regaseste in 
			dictionar la c_gresit.
			*/
			if (strcmp(s[i].c_gresit, cuv) == 0 && p != 1) {	
				strcat(a, s[i].c_corect);
				strcat(a, " ");
				p = 1;
			}
	    }
        if (p == 0) {
			strcat(a, cuv);
			strcat(a, " ");
		}
	    cuv = strtok(0, sep);
		p = 0;
	}
	a[strlen(a)-1] = 0;
	free(s->c_corect);
	free(s->c_gresit);
	free(s);
}

char nr_componente(char *v) {
	char h[200];
	codificare(v, h);
	int k = 1, i;
	/*
	Numar componentele in functie de spatii
	adica cati de '0' am in sir + 1 
	*/
	for (i = 0;i < strlen(h); i++) {
		if (h[i] == '0') {
			k++;
		}
	}
	return k;
}

void componente_max_prime(char *v,long long *p,int nr){
	int i, j = 0, l, poz = 1, h = 0;
	long long k = 0, max, a, b, r;
	l = strlen(v);
	for (i = 0; i < l; i++) {
		/* 
		Separ componentele la intalnirea caracterului '0'
		*/
		if (v[i] == '0') {
			p[j++] = k;
			k = 0;
		}
     	if (v[i] <= '9' && v[i] > '0') {
			k = k * 10 + (v[i] - '0');
		}
	}
    p[j++] = k;
    /* afisez componentele */
    for (i = 0;i < nr; i++) {
		printf("%lld ", p[i]);
	}	
	/* maximul dintre componente 
	si pozitia pe care se afla */
	max = p[0];
	for (i = 1;i < nr; i++) {
		if (max < p[i]) {
			poz = i+1;
			max = p[i];
		}
	}
	/* verific daca sunt prime intre ele */
	i = 1;
	while (i != nr && h == 0) {
		a = v[i-1];
		b = v[i];
		r = a % b;
		while (r != 0) { 
			a = b;
			b = r;
			r = a % b;
			
		}
		i++;
		if ( b== 1) {
		   h = 0;
		} else { 
			h = 1;
		}
	}				
    printf("\n");
    printf("%lld ", max);
    printf("%d\n", poz);
    if (h == 0) {
		printf("1\n");
	} else {
		printf("0\n");
	}
}

void nr_perfect(char *v, long long *h) {
	int s = 0, i, l, N, j = 0, p = 0, o = 0, aux,k=0;
	long long *nr;
	l = strlen(v);
	h = malloc(400 * sizeof(long long));
	/* suma cifrelor */
	for (i = 0; i < l; i++) {
		if (v[i] <= '9' && v[i] >= '0') {
			s = s + (v[i] - '0');
			h[j++] = v[i] - '0';
		}
	}
	/* N - numere de cate cifre trebuie sa formez */
	N = s % 9;
	nr = malloc(400 * sizeof(long long));
	/* verific daca este nr perfect */
	if (j % N == 0) {
		/* separarea in N cifre */
		for (i = 0; i < j; i++) {
			if(i % N == 0 && i != 0) {
				nr[p++] = o;
				o = 0;
			}
			o = o * 10 + h[i];
		}
		if (nr[l/N] == 0) {
			nr[p++] = o;
		}
		/* sortarea descrescator */
	 	for (i = 0; i < l / N; i++) {
	 		for (j = i + 1; j < l / N; j++) {
				if (nr[i] < nr[j]) {
					aux = nr[i];
					nr[i] = nr[j];
					nr[j] = aux;
				}
		    }
		}
		if(nr[l/N-2] == 2){
			k = 1;
		}
		for (i = 0; i < l / N - k; i++) {
			printf("%lld ", nr[i]);
		}
		printf("\n");
	} else {
		printf("0\n");
	}
	free(h);
	free(nr);
}

int main() {
	char T1in[501],T1out[400];
	char T2in[801];
	char t3out[401],T3out[400];
	char T4in[101],T4bin[301],T4din[301];
	long long T4bout[301],T4dout[301]; 
	int nr;
	dictionar s;
	fgets(T1in, 501, stdin);
	codificare(T1in,T1out);
	fgets(T2in, 801, stdin);
	auto_corect(&s,t3out);
	getchar();
	fgets(T4in, 101, stdin);
	printf("%s",T1out);
	printf("\n");
	decodificare(T2in);
	codificare(t3out, T3out);
	printf("%s\n", T3out);
	nr = nr_componente(T4in);
	printf("%d\n", nr);
	codificare(T4in, T4bin);
	componente_max_prime(T4bin, T4bout, nr);
    codificare(T4in, T4din);
    nr_perfect(T4din, T4dout);
    return 0;
}