def f(x):
    return x**3-2*x-5

def metodoBiseccion(f, a, b, tol):
    if (f(a) * f(b) > 0):
        print("No hay raiz en el intervalo")
        return None
    else:
        i = 0
        while( (b-a)/2) > tol:
            p = (a+b) / 2
            if(f(p) == 0):
                return p
            elif(f(a) * f(p) < 0):
                b = p
            else:
                a = p
            i += 1

    print(f"Raiz en: {p}")
    print(f"Iteraciones: {i}")


def run():
    #Implementacion del metodo de biseccion
    metodoBiseccion(f, -2, 3, 0.0001)
    
if __name__ == '__main__':
    run()
