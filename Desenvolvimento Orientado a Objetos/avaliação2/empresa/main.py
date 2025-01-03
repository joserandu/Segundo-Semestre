# Corrigir chegando em casa
try:
  with open("departamento_financeiro/README.txt", 'r') as dpf
    dp_financeiro = dpf.read()  
    print(dp_financeiro)
except FileNotFoundError:
  print("Erro: Arquivo não encontrado.")

try:
  with open("departamento_recursos_humanos/README.txt", 'r') as dprh
    dp_recursos_humanos = dprh.read()
    print(dp_recursos_humanos)
except FileNotFoundError:
  print("Erro: Arquivo não encontrado.")

try:
  with open("departamento_tecnologia/README.txt", 'r') as dpt
    dp_tecnologia = dpt.read()
    print(dp_tecnologia)
except FileNotFoundError:
  print("Erro: Arquivo não encontrado.")
