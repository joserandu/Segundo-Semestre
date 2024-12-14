def valida_nome(name):
    try:
        if not all(char.isalpha() or char.isspace() for char in name):
            raise ValueError("O nome deve conter apenas letras.")
        name = name.title()
        return f"Nome formatado: {name}"
    except ValueError as e:
        return f"{e}"


def valida_email(email):
    try:
        if "@" in email and email.endswith(".com") or email.endswith(".org"):
            return f"E-mail válido: {email}"
        else:
            raise ValueError("O formato do e-mail está incorreto.")
    except Exception as e:
        return f"Erro no e-mail: {e}"


nome = input("Digite o seu nome completo: ")
email = input("Digite o seu e-mail: ")

print(valida_nome(nome))
print(valida_email(email))
