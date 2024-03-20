#include "tarefas.h"
#include <stdio.h>

Erro criar(Tarefa t[], int *pos) {
  if (*pos >= TOTAL)
    return MAX_TAREFAS;

  printf("Entre com uma prioridade: ");
  scanf("%d", &t[*pos].prioridade);
  clearBuffer();

  printf("Entre com a descricao: ");
  fgets(t[*pos].descricao, 300, stdin);
  clearBuffer();

  printf("Entre com a categoria: ");
  fgets(t[*pos].categoria, 100, stdin);

  printTarefa(t[*pos]);
  *pos = *pos + 1;

  return OK;
}
Erro deletar(Tarefa t[], int *pos) {
  printf("funcao deletar tarefa");
  return OK;
}
Erro listar(Tarefa t[], int pos) {
  if (pos == 0)
    return SEM_TAREFAS;

  for (int i = 0; i < pos; i++)
    printTarefa(t[i]);

  return OK;
}
Erro salvar(Tarefa t[], int pos, int tamanho) {
  printf("funcao salvar tarefas");
  return OK;
}
Erro carregar(Tarefa t[], int *pos, int tamanho) {
  printf("funcao carregar tarefas");
  return OK;
}
void printTarefa(Tarefa t) {
  printf("\nPrioridade: %d\tCategoria: %s", t.prioridade, t.categoria);
  printf("Descricao: %s\n", t.descricao);
}
void clearBuffer() {
  int c;
  while ((c = getchar()) != '\n' && c != EOF) {
  }
}