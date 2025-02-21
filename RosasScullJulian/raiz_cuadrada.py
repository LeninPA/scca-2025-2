import math

def raiz_cuadrada_newton(n, tolerancia=1e-10, max_iter=1000):
    if n < 0:
        raise ValueError("No se puede calcular la raíz cuadrada de un número negativo.")
    if n == 0:
        return 0
    x = n
    for i in range(max_iter):
        raiz = 0.5 * (x + n / x)
        if abs(x - raiz) < tolerancia:
            return raiz
        x = raiz
    return x


def calcular_error(valor_aproximado, valor_real):
    return abs(valor_aproximado - valor_real)


def main():
    numero = float(input("Introduce un número para calcular su raíz cuadrada: "))
    
    # Calcula la raíz cuadrada usando el método de Newton
    raiz_newton = raiz_cuadrada_newton(numero)

    raiz_math = math.sqrt(numero)

    error = calcular_error(raiz_newton, raiz_math)

    print(f"Raíz cuadrada (Método de Newton): {raiz_newton}")
    print(f"Raíz cuadrada (math.sqrt): {raiz_math}")
    print(f"Error entre ambos métodos: {error}")


if __name__ == "__main__":
    main()