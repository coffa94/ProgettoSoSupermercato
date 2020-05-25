#ifndef _UTIL_H_ //se non è già stato definito
#define _UTIL_H_ //lo definisco, così se è incluso anche il altri file viene inserito dal preprocessore soltanto una volta (si evita di avere il codice più volte

//controlla se s ritorna -1, in questo caso stampa errore e esci
#define ec_meno1(s,m)\
	if ((s)==-1) { perror(m); exit(EXIT_FAILURE); }

//controlla se s ritorna -1, in questo caso stampa errore esegui c e esci
#define ec_meno1_c(s,m,c)\
	if ((s)==NULL) { perror(m); c; exit(EXIT_FAILURE); 

//controlla se s ritorna NULL, in questo caso stampa errore e esci
#define ec_null(s,m)\
	if ((s)==NULL) { perror(m); exit(EXIT_FAILURE); }

//controlla se s ritorna NULL, in questo caso stampa errore esegui c e esci
#define ec_null_c(s,m,c)\
	if ((s)==NULL) { perror(m); c; exit(EXIT_FAILURE); }


#endif
