def f(x):
    return x**3-2*x-5

def metodoBiseccion(f, a, b, tol, n):
    if (f(a) * f(b) > 0):
        print("No hay raiz en el intervalo")
        return None
    else:
        for i in range(n):
            p = (a + b) / 2
            if (f(p) == 0):
                return p
            elif (f(a) * f(p) < 0):
                b = p
            else:
                a = p
            if (abs(f(p)) < tol):
                break

    print(f"Solucion aproximada: {p}")
    print(f"Numero de iteraciones: {i}")


def run():
    #Implementacion del metodo de biseccion
    metodoBiseccion(f, -2, 3, 0.0001, 100)
    
if __name__ == '__main__':
    run()
