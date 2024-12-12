def valida_nome(name):
    """Arruma aquiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii return carai"""
    try:
        name = str(name.title())
    except: # colocar a saída para erro com número!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
        print("Erro no nome: O nome deve conter apenas letras.")


def valida_email(email):
    try:
        if "@" in email and email.endswith(".com") or email.endswith(".org"):
            return f"E-mail válido: {email}"
        else:
            raise ValueError("O formato do e-mail está incorreto.")
    except Exception as e:
        return f"Erro no e-mail: {e}"


nome = input("Digite o seu nome: ")
email = input("Digite o seu email: ")

print(valida_nome(nome))
print(valida_email(email))
