def crear_saludo(nombre):
    saludo = "hola " + str(nombre) + "este programa esta hecho en el lenguaje de programacion: python"
    return saludo

def  main():
    nombre = input("¿como te llamas? ")
    saludo = crear_saludo(nombre)
    print(saludo)

if __name__ == "__main__":
    main()