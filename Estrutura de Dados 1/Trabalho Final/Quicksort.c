#include <stdio.h>
#include <stdlib.h>     /* necessário para as funções rand() e srand() */
#include <time.h>       /* for clock_t, clock(), CLOCKS_PER_SEC */
#include <locale.h>

#define TAMANHO 5000
int vet[5000];
FILE *arq;
char filename[30] = "arq_teste.txt";

// Função para realizar a partição (partition) no Quick Sort
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1; // Índice do menor elemento

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            // Troca os elementos arr[i] e arr[j]
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Coloca o pivô na posição correta
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

// Função para ordenar o array usando Quick Sort
void quick_sort(int arr[], int low, int high) {
    if (low < high) {
        // Encontra o índice do pivô
        int pi = partition(arr, low, high);

        // Ordena as duas sublistas separadamente
        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
    }
}

// Função para ler o arquivo
int le_arquivo(int TAM) { /* faz a abertura do arquivo e leitura de uma quantidade de números */
    int i;
    arq = fopen(filename, "rt");
    if (arq == NULL)
        return -1; /* falha na abertura do arquivo */
    else {
        /* arquivo aberto com sucesso */
        srand(time(NULL));
        for (i = 0; i < 5000; i++) {
            if (i < TAM - 1) {
                fscanf(arq, "%d,", &vet[i]); // Lê número seguido de uma vírgula
            } else {
                fscanf(arq, "%d", &vet[i]); // Lê o último número sem vírgula
            }
        }
    }
    fclose(arq);
    return 0;
}

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "Portuguese");

    // Variáveis de configuração da atividade
    double soma = 0.0, media;
    int ww, n;
    double time_spent = 0.0;
    FILE *result_file;

    // Abrir um único arquivo para armazenar os tempos de execução
    result_file = fopen("quick_sort.txt", "w");
    if (result_file == NULL) {
        printf("Erro ao criar o arquivo de resultados.\n");
        return -1;
    }

    // Vetor com os tamanhos de entrada para cada execução
    int tamanhos[] = {500, 1000, 1500, 2000, 2500, 3000, 3500, 4000, 4500, 5000};

    // Para cada tamanho de entrada
    for (int size_index = 0; size_index < 10; size_index++) {
        n = tamanhos[size_index];

        // Escrever no arquivo o tamanho que está sendo executado
        fprintf(result_file, "Tempo da ordenação com %d números:\n", n);

        // Repetir o processo para 1000 execuções
        soma = 0.0; // Resetar soma a cada novo tamanho
        for (ww = 0; ww < 1000; ww++) {
            le_arquivo(n);  // Ler os primeiros n números do arquivo

            clock_t begin = clock();  // Tempo inicial

            // Executar o algoritmo Quick Sort
            quick_sort(vet, 0, n - 1);

            clock_t end = clock();  // Tempo final

            // Calcular o tempo decorrido
            time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
            fprintf(result_file, "%f\n", time_spent);  // Armazenar o tempo da execução

            soma += time_spent;  // Somar o tempo total
        }

        // Calcular o tempo médio
        media = soma / 1000;

        // Escrever o tempo médio no arquivo
        fprintf(result_file, "Tempo médio: %f\n\n", media);
    }

    fclose(result_file);  // Fechar o arquivo de resultados

    printf("Execuções concluídas. Os resultados foram armazenados em 'quick_sort.txt'.\n");

    system("PAUSE");
    return 0;
}
