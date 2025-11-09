#ifndef CORES_H
#define CORES_H

// Definições das cores
#define COR_VERMELHO   "\033[1;31m"
#define COR_VERDE      "\033[1;32m"
#define COR_AMARELO    "\033[1;33m"
#define COR_AZUL       "\033[1;34m"
#define COR_MAGENTA    "\033[1;35m"
#define COR_CIANO      "\033[1;36m"
#define COR_BRANCO     "\033[1;37m"
#define COR_RESET      "\033[0m"

// Funções para imprimir com cor
void imprimirVermelho(const char* texto);
void imprimirVerde(const char* texto);
void imprimirAmarelo(const char* texto);
void imprimirCiano(const char* texto);
void imprimirTitulo(const char* texto);

#endif