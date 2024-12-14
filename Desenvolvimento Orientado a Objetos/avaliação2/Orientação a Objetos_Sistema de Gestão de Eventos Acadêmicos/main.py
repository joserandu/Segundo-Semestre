import re
from datetime import datetime


class Evento:
    def __init__(self, nome, data, local):
        self._nome = nome
        self._data = data
        self._local = local

    # Getters e setters
    def get_nome(self):
        return self._nome

    def set_nome(self, new_nome):
        self._nome = new_nome

    def get_data(self):
        return self._data

    def set_data(self, new_data):

        if not re.match(r'^\d{2}/\d{2}/\d{4}$', new_data):
            return "Formato inválido. Use DD/MM/AAAA."

        try:
            datetime.strptime(new_data, '%d/%m/%Y')
            self._data = new_data
        except ValueError:
            return False, "Data inválida."

    def get_local(self):
        return self._local

    def set_local(self, new_local):
        self._local = new_local

    # Função para validar a data
    def validar_data(self, data):
        if not re.match(r'^\d{2}/\d{2}/\d{4}$', data):
            return False, "Formato inválido. Use DD/MM/AAAA."

        try:
            datetime.strptime(data, '%d/%m/%Y')
            self._data = data
        except ValueError:
            return False, "Data inválida."

    def detalhes(self):
        return f"Nome: {self._nome}\nData: {self._data}\nLocal: {self._local}"


class Congresso(Evento):
    def __init__(self, nome, data, local, n_trabalhos):
        super(Congresso, self).__init__(nome, data, local)
        self._n_trabalhos = n_trabalhos

    # Getters e Setters
    def get_n_trabalhos(self):
        return self._n_trabalhos

    def set_n_trabalhos(self, new_n_trabalhos):
        try:
            if int(new_n_trabalhos) > 0:
                self._n_trabalhos = new_n_trabalhos
            else:
                return f"Insira um valor positivo"
        except ValueError:
            return f"Número inválido."

    def detalhes(self):
        return f"Nome: {self._nome}\nData: {self._data}\nLocal: {self._local}\nNº Trabalhos: {self._n_trabalhos}"


class Palestra(Evento):
    def __init__(self, nome, data, local, palestrante):
        super(Palestra, self).__init__(nome, data, local)
        self._palestrante = palestrante

    # Getters e Setters
    def get_palestrante(self):
        return self._palestrante

    def set_palestrante(self, new_palestrante):
        self._palestrante = new_palestrante

    def detalhes(self):
        return f"Nome: {self._nome}\nData: {self._data}\nLocal: {self._local}\nPalestrante: {self._palestrante}"


class Workshop(Evento):
    def __init__(self, nome, data, local, vagas):
        super(Workshop, self).__init__(nome, data, local)
        self._vagas = vagas

    # Getters e Setters
    def get_vagas(self):
        return self._vagas

    def set_vagas(self, new_vagas):
        try:
            if int(new_vagas) > 0:
                self._vagas = new_vagas
            else:
                return f"Digite um número positivo!"
        except ValueError:
            return f"Digite um valor válido"

    def detalhes(self):
        return f"Nome: {self._nome}\nData: {self._data}\nLocal: {self._local}\nVagas: {self._vagas}"


def mostrar_detalhes_evento(evento):
    return evento.detalhes()


congresso = Congresso("Congresso de Tecnologia do IFSP", "20/09/2024", "IFSP - Campus São Paulo", 60)
palestra = Palestra("Noções Básicas de Arduíno", "24/10/2024", "Laboratório 14", "Alexandre Belleti")
workshop = Workshop("Power Automate: Automação", "10/01/2024", "Online", 200)

# Getters
print(congresso.get_nome())
print(congresso.get_data())
print(congresso.get_local())
print(congresso.get_n_trabalhos())
print("")
print(palestra.get_nome())
print(palestra.get_data())
print(palestra.get_local())
print(palestra.get_palestrante())
print("")
print(workshop.get_nome())
print(workshop.get_data())
print(workshop.get_local())
print(workshop.get_vagas())
print("")

# Utilizando a função mostrar_detalhes_evento()
print(mostrar_detalhes_evento(congresso))
print(mostrar_detalhes_evento(palestra))
print(mostrar_detalhes_evento(workshop))

# Setters
congresso.set_nome("Congresso de Extenção")
congresso.set_data("11/10/2024")
congresso.set_local("IFSP - Campus avaré")
congresso.set_n_trabalhos(100)

palestra.set_nome("Conectando pessoas e negócios - A nova Era dos Chatbots e da Gen Al no Whatsapp | 24/09/2024")
palestra.set_data("20/09/2024")
palestra.set_local("Laboratório 14")
palestra.set_palestrante("Astolfo")

workshop.set_nome("IBM Z Xplore")
workshop.set_data("01/10/2024")
workshop.set_local("Online")
workshop.set_vagas(300)

# Novos valores
print(mostrar_detalhes_evento(congresso))
print(mostrar_detalhes_evento(palestra))
print(mostrar_detalhes_evento(workshop))
