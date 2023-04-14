def falsa_posicion(f, a, b, error, iter):
    
    if f(a) * f(b) > 0:
        print(f"No hay raiz en el intervalo [{a},{b}]")
        return None
    else:
        for i in range(iter):
            xr = a - ( (f(a) * (b-a)) / (f(b) - f(a)))
            
            if abs((xr - a) / xr) < error or f(xr) == 0:
                break
            elif f(xr) * f(a) < 0:
                b = xr
            else:
                a = xr
         
    return xr

def f(x):
    return (x**3) - (x**2) - 100

def run():
    raiz = falsa_posicion(f,-1,10,0.0000001,100)
    print(raiz)

if __name__ == '__main__':
    run()