from meu_pacote.mensagens import saudar, despedir
from meu_pacote.operacoes import somar, multiplicar
from colorama import Back, Fore, Style

"""
Criei os módulos sem o comando with open para deixar esse código mais limpo.
"""


def main():

    print("Digite dois números para tirar a soma e o produto: ")
    num1 = int(input("Digite o primeiro número: "))
    num2 = int(input("Digite o segundo número: "))
    nome = input("Digite o seu nome: ")

    print(saudar(nome))
    print(despedir(nome))
    print("-----------------------------------------------------------------------------------------------------------")
    print(somar(num1, num2))
    print(multiplicar(num1, num2))


"""
Qual é o propósito do Colorama?

O propósito dessa biblioteca é imprimir textos coloridos no terminal, deixando mais legível e personalizável os 
textos para debugs ou estética personalizada pelo programador.

Quais são os principais componentes usados no código (como Fore, Back e Style)?

- Fore: define a cor do texto.
- Back: define a cor do background.
- Style: define o estilo do texto (como claro ou escuro).

Forneça um exemplo simples do uso do pacote retirado da documentação oficial.

Um exemplo de uso retirado da documentação oficial (https://pypi.org/project/colorama/) é esse:

from colorama import Fore, Back, Style
print(Fore.RED + 'some red text')
print(Back.GREEN + 'and with a green background')
print(Style.DIM + 'and in dim text')
print(Style.RESET_ALL)
print('back to normal now'
"""

# Para ativar a função:
# main()

nome = input("Digite o seu nome: ")

print(Fore.GREEN + saudar(nome))
print(Fore.YELLOW + despedir(nome))

print("---------------------------------------------------------------------------------------------------------------")


