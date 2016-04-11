# BCCPOLYA

### Problema
Desenvolver uma função em C que calcule uma aproximação da raiz quadrada de um numero real

### Solução em português estruturado:
```portugol
ALGORITMO "BCCPOLYA"

FUNCAO raizQuadrada(numero: real): real
VAR
resultado: real
i: inteiro
INICIO
	resultado <- numero
	PARA i DE 0 ATE 200 PASSO 1 FACA
		resultado <- resultado/2 + numero/(2*resultado)
	FIMPARA
	RETORNE resultado
FIMFUNCAO

PROCEDIMENTO main()
VAR numeroReal: real
INICIO
   LEIA (numeroReal)
   ESCREVA(raizQuadrada(numeroReal))
FIMPROCEDIMENTO

INICIO
main()
FIMALGORITMO
```

### Solução em fluxograma:
![Fluxograma](./fluxograma.png "Fluxograma")

### Porque Polya no nome do repositorio ?
Porque o "Polya" vem de [George Pólya](https://pt.wikipedia.org/wiki/George_P%C3%B3lya) que foi um grande matemático que contribuiu muito para a [Heurística](https://pt.wikipedia.org/wiki/Heur%C3%ADstica) que consiste em um método que tem como objetivo encontrar soluções para um problema, ou seja é uma referencia que esta completamente relacionada com o assunto tarefa.

[por Douglas dos Santos Brito](https://github.com/dbrito)