#include <iostream>
#include <ctime>
#include <cstring>
#include <cctype>
#include <cmath>
#include <iomanip>
#include <algorithm>

using namespace std;

int **dinamic_memory(int dim){
    int **a;
    a=new int*[dim];
    for (int i=0;i<dim;i++){
        a[i]=new int[dim];
    }
    return a;
}

int **generate_matrix(int dim)
{
    //matrix[f][c]
    int **matrix=dinamic_memory(dim);
    for (int f=0;f<dim;f++){
        for (int c=0;c<dim;c++){
            matrix[f][c]=(c+1)+dim*f;
        }
    }
    return matrix;
}

void print_matrix(int **matrix, int dim){
    for (int f=0;f<dim;f++){
        for (int c=0;c<dim;c++){
            cout << matrix[f][c] << '\t';
        }
        cout << endl << endl;
    }
}

int **rotate_90(int **matrix,int dim){
    int **R_matrix=dinamic_memory(dim);
    for (int f=0;f<dim;f++){
        for (int c=0;c<dim;c++){
            R_matrix[c][dim-f-1]=matrix[f][c];
        }
    }
    return R_matrix;
}

int ***rotate_matrix(int dim){
    int ***conj_matrix = new int**[4];
    conj_matrix[0]=generate_matrix(dim);
    for (int i=1;i<4;i++){
        conj_matrix[i]=rotate_90(conj_matrix[i-1],dim);
    }
    return conj_matrix;
}


void problema1(int *valor, int dinero)
{
    for (short i=0; i<10; i++){
         cout << *(valor+i) << '\t' << dinero/(*(valor+i)) << endl;
         dinero = dinero % *(valor+i);
    }
    cout << "Restante" << '\t' << dinero << endl;
}

void problema2(char *aleatorio)
{
    srand(time(NULL));
    for (int i = 0; i < 200; i++) {
        aleatorio[i] = (rand() % 26 + 65); // Generar un número aleatorio entre 65 y 90
    }
    cout << aleatorio << endl;
    int cont=0;
    char x='A';
    for(int j=0 ; j < 26 ; j++){
        for(int i=0 ; i < 200 ; i++){
            if (aleatorio[i]==x)
                cont++;
            }
            cout<<x<<": "<<cont<<endl;
            cont=0;
            x++;
        }
}

void problema3(char *cadena1, char *cadena2, bool iguales)
{
    if (strlen(cadena1)!=strlen(cadena2)){
        iguales = false;
    }
    for (int i=0; i < short(strlen(cadena1));i++){
        if (cadena1[i]!=cadena2[i])
            iguales = false;
    }
    if (iguales == true){
        cout << "Las cadenas son iguales" << endl;
    }
    else
        cout << "Las cadenas no son iguales" << endl;
}

void problema4(char *cadena,int num)
{
    for (int i=0;i<short(strlen(cadena));i++){
        if (!isdigit(cadena[i])){
                cout << "La cadena no es caracteres numericos" << endl;
                break;
        }
        num=num*10+(cadena[i]-'0');  //Se resta '0' para convertir el caracter a entero
    }
    if (num!=0)
        cout << num << endl;
}

void problema5(int valor, char* cadena)
{
    for (int i=0;valor>0;i++){
        int digito = valor % 10;
        char convierte = digito + '0';
        cadena[i]=convierte;
        valor/=10;
    }
    strrev(cadena);
    cout << cadena << endl;
}

void problema6(char *cadena)
{
    char nomod[strlen(cadena)];
    strcpy (nomod,cadena);
    for (int i=0;i<short(strlen(cadena));i++){
        cadena[i]=toupper(cadena[i]);
    }
    cout << "Original: " << nomod << " En mayuscula: " << cadena << endl;
}

void problema7(char *cadena)
{
    int cont=0;
    char nomod[strlen(cadena)];
    char repetido[26];
    strcpy (nomod,cadena);
    for (int i=0;i<short(strlen(cadena));i++){
        for (int j=0;j<short(strlen(cadena));j++){
            if (nomod[i]==cadena[j]){
                if (nomod[i]==repetido[j]){
                    break;
                }
                repetido[cont]=nomod[i];
                cont++;
                break;
            }
        }
    }
    cout << "Original: " << cadena << " Sin repetidos: " << repetido;
}

void problema8(char *cadena)
{
    char digitos[strlen(cadena)], letras[strlen(cadena)];
    int cont=0, cont1=0;
    for (int i=0;i<short(strlen(cadena));i++){
        if (isdigit(cadena[i])){
            digitos[cont]=cadena[i];
            cont++;
        }
        else{
            letras[cont1]=cadena[i];
            cont1++;
        }
    }
    cout << "Original: " << cadena << " Texto: " << letras << " Numero: " << digitos << endl;
}

void problema9(char *cadena, int num)
{
    int tamano=strlen(cadena), ceros=num-tamano%num, Ncadena[tamano+ceros], entero=0, aux=0;
    for (int i=0;i<ceros;i++){
        Ncadena[i]=0;
    }
    tamano+=ceros;
    for (int i = ceros; i < tamano; i++) {
        entero=entero*10+(cadena[i-ceros]-'0');
        Ncadena[i] = entero;
        entero/=10;
    }
    int Ntam=sizeof(Ncadena)/4;
    for (int i=0;i<Ntam;i++){
        entero=entero*10+(Ncadena[i]);
        if ((i+1)%num==0 && entero!=0){
            aux+=entero;
            entero/=pow(10,num);
        }
    }
    cout << "Cadena original con ceros: ";
    for (int i=0;i<Ntam;i++){
    cout << Ncadena[i];
    }
    cout << " suma: " << aux << endl;
}


int valor_romano(char c) {
    switch (c) {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            return 0;
    }
}

void problema10(char *cadena)
{
    int valor=0, longitud=short(strlen(cadena)),arabigo=0;
    for (int i=0;i<longitud;i++){
        valor=valor_romano(cadena[i]);
        int siguiente=0;
        if (i < longitud - 1)
            siguiente = valor_romano(cadena[i + 1]);
        if (valor < siguiente)
            arabigo -= valor;
        else
            arabigo += valor;

    }
    cout << arabigo << endl;
}

void imprimir_asientos(char matrix[15][20]){
    cout << "\t*** SALA DE CINE ***\n\n";
    cout << "   1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17 18 19 20" << endl;
    for (int f=0;f<15;f++){
        cout << char('A'+f) << " ";
        for (int c=0;c<20;c++){
            cout << setw(2) << matrix[f][c] << ' ';
        }
        cout << endl;
    }
}

void problema11()
{
    char matrix[15][20];
    for (int f=0;f<15;f++){
        for (int c=0;c<20;c++){
            matrix[f][c]='-';
        }
    }
    imprimir_asientos(matrix);

   char reservar,fila;
   int asiento;
   while (true){
       cout << "Ingrese (R) para reservar, (C) para cancelar una reserva o (S) para salir: ";
       cin >> reservar;
       if (reservar == 'S') break;
       if (reservar != 'R' && reservar != 'C') {
           cout << "Acción invalida. Intente de nuevo." << endl;
           continue;
       }
       cout << "Ingrese la fila donde desea reservar (A-O): ";
       cin >> fila;
       if (fila < 'A' || fila > 'O') {
           cout << "Fila invalida. Intente de nuevo." << endl;
           continue;
       }
       int nfila=fila-'A';
       cout << "Ingrese el numero de asiento (1-20): ";
       cin >> asiento;
       if (asiento < 1 || asiento > 20) {
           cout << "Número de asiento invalido. Intente de nuevo." << endl;
           continue;
       }
       // Verificar si el asiento está disponible o no
       if (matrix[nfila][asiento-1] == '+' && reservar == 'R') {
           cout << "El asiento ya esta reservado. Intente de nuevo." << endl;
           continue;
       }
       else if (matrix[nfila][asiento-1] == '-' && reservar == 'C') {
           cout << "El asiento no esta reservado. Intente de nuevo." << endl;
           continue;
       }
       else {
            if (reservar == 'R') {
                matrix[nfila][asiento-1] = '+'; // Reservar el asiento
            }
            else {
                matrix[nfila][asiento-1] = '-'; // Liberar el asiento
            }
        }
       imprimir_asientos(matrix);
    }
}

void problema12(int **magica, int dim)
{
    magica=dinamic_memory(dim);
    for(int i=0; i<dim; i++) {
            for(int j=0; j<dim; j++) {
                cout << "Ingrese el valor de la fila " << i+1 << ", columna " << j+1 << ": ";
                cin >> magica[i][j];
            }
        }
    cout << endl;
    print_matrix(magica,dim);
    cout << "Ahora comprobaremos si la matriz ingresada es un cuadrado magico" << endl;
    int suma_magica=0;
    for (int i=0;i<dim;i++){
        suma_magica+=magica[0][i];
    }
    for (int f=0;f<dim;f++){
        int sum_filas=0;
        for (int c=0;c<dim;c++){
            sum_filas+=magica[f][c];
        }
        if (sum_filas!=suma_magica){
            cout << "La matriz ingresada no es un cuadrado magico" << endl;
            break;
        }
    }
    for (int c=0;c<dim;c++){
        int sum_columna=0;
        for (int f=0;f<dim;f++){
            sum_columna+=magica[f][c];
        }
        if (sum_columna!=suma_magica){
            cout << "La matriz ingresada no es un cuadrado magico" << endl;
            break;
        }
    }
    int sum_diag=0;
    for (int d=0;d<dim;d++){
        sum_diag+=magica[d][d];
    }
    if (sum_diag!=suma_magica){
        cout << "La matriz ingresada no es un cuadrado magico" << endl;
    }
    sum_diag=0;
    for (int d=0;d<dim;d++){
        sum_diag+=magica[d][dim-d-1];
    }
    if (sum_diag!=suma_magica){
        cout << "La matriz ingresada no es un cuadrado magico" << endl;
    }
    cout << "La matriz: " << endl << endl;
    print_matrix(magica,dim);
    cout << "es un cuadrado magico donde la suma de todos los lados es: " << suma_magica << endl;
}

int problema13(int *matrix, int fila, int columnas)
{
    int cont = 0;
    for (int f = 1; f < fila-1; f++) {
        for (int c = 1; c < columnas-1; c++) {
            int valorActual = *(matrix + f * columnas + c);
            int valorIzquierda = *(matrix + f * columnas + c-1);
            int valorDerecha = *(matrix + f * columnas + c+1);
            int valorArriba = *(matrix + (f-1) * columnas + c);
            int valorAbajo = *(matrix + (f+1) * columnas + c);
            if ((valorActual + valorIzquierda + valorDerecha + valorArriba + valorAbajo)/5 > 6){
                cont++;
            }
        }
    }
    return cont;
}

void problema14(int ***conj_mat, int dim){
    for (int i=0;i<4;i++){
        cout << "Matriz rotada: " << i*90 << " grados:" << endl << endl;
        print_matrix(conj_mat[i],dim);
        cout << endl << endl;
    }
}


void problema15(int A[], int B[], int C[])
{
    int x1 = A[0], y1 = A[1], a1 = A[2], h1 = A[3];
    int x2 = B[0], y2 = B[1], a2 = B[2], h2 = B[3];

    int interseccion_x = max(0, min(x1 + a1, x2 + a2) - max(x1, x2));  //Punto mas a la derecha menos el punto mas a la izquierda
    int interseccion_y = max(0, min(y1 + h1, y2 + h2) - max(y1, y2));  //Punto mas abajo menos punto mas arriba

    if (interseccion_x == 0 || interseccion_y == 0) {
        C[0] = 0;
        C[1] = 0;
        C[2] = 0;
        C[3] = 0;
    } else {
        C[0] = max(x1, x2);
        C[1] = max(y1, y2);
        C[2] = interseccion_x;
        C[3] = interseccion_y;
    }
    cout << "El rectangulo interseccion de A y B es: " << '{' << C[0] << ',' << C[1] << ',' <<  C[2] << ',' << C[3] << '}' << endl;
}

int factorial(int n) {
    int fact = 1;
    for(int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

void problema16(int n)
{
    //Usando la formula combinaciones y permutaciones tenemos C=(A+D)!/[(A)!(D)!]
    //Donde A es los posibles caminos que tengo para ir abajo, en este caso en una cuadricula de tamaño nxn puedo ir solamente n veces hacia abajo
    //Y D es los posibles caminos que tengo para ir hacia la derecha, en este caso en una cuadricula de tamaño nxn puedo ir solamente n veces hacia la derecha
    int num_caminos = factorial(n+n) / (factorial(n) * factorial(n));
        cout << "El numero de caminos posibles en una cuadricula de " << n << "x" << n << " es: " << num_caminos << endl;
}

void problema17(int n)
{
    int sum = 0;
    for (int a = 1; a < n; a++) {
        int b = 0;
        for (int i = 1; i < a; i++) {
            if (a % i == 0) {
                b += i;
            }
        }
        if (b > a && b < n) {
            int c = 0;
            for (int i = 1; i < b; i++) {
                if (b % i == 0) {
                    c += i;
                }
            }
            if (c == a) {
                sum += a + b;
            }
        }
    }
    cout << sum << endl;
}

void problema18(int n)
{
    int permutacion[10]={0,1,2,3,4,5,6,7,8,9};
    for (int i=1;i<n;i++){
        next_permutation(permutacion, permutacion+10);
    }
    cout<<"La permutacion numero "<<n<<" es: ";
    for(int j=0;j<10;j++){
        cout<<permutacion[j];
    }
    cout<< endl;

}
