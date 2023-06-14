#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    //Ejercicio 1:
//    cout << "ingrese dos numeros: ";
//    int A, B;
//    cin >> A >> B;
//    cout << "El residuo de la division es: " << A%B;


    //Ejercicio 3:
//    cout << "ingrese dos numeros: ";
//    int A, B;
//    cin >> A >> B;
//    if(A>B){
//        cout << "El mayor de los numeros es: " << A;
//    }
//    else{
//        cout << "El mayor de los numeros es: " << B;
//    }


    //Ejercicio 5:
//    cout << "ingrese dos numeros: ";
//    int A, B;
//    cin >> A >> B;
//    if(float(A)/B - A/B >= 0.5){
//        cout << "El resultado de la division con redondeo es: " << A/B +1;
//    }
//    else{
//            cout << "El resultado de la division con redondeo es: " << A/B;
//    }


    //Ejercicio 7:
//    cout <<"ingrese un número: ";
//    int num,valor=0;
//    cin >> num;
//    for(int i=0;i<=num;i++){
//        valor+=i;
//    }
//    cout<<valor;


    //Ejercicio 9:
//    cout <<"ingrese un numero: ";
//    int N;
//    float pi=3.1416, perimetro, Area;
//    cin >> N;
//    perimetro = pi*(2*N);
//    Area = pi*(N*N);
//    cout << "El perimetro es: " << perimetro << " Con un area de: " << Area;


    //Ejercicio 11:
//    cout <<"ingrese un numero: ";
//    int N,tabla=10,rst;
//    cin >> N;
//    for(int i=1; i<=tabla; i++){
//        rst=N*i;
//        cout<<N<<"x"<<i<<"="<<rst<<'\n';
//    }


    //Ejercicio 13:
//    cout <<"ingrese un numero: ";
//    int N;
//    cin >> N;
//    cout << "Los divisores de N son: " << '\n';
//    for(int i=1; i<=N; i++){
//    if(N%i==0){
//        cout << i << '\n';
//    }
//    }

    //Ejercicio 15:
//   int N, suma=0;
//    do{
//        cout << "Ingresa numeros, cuando ingreses el numero 0 se detendra el programa para hacer la sumatoria: ";
//        cin >> N;
//        suma+=N;
//    }
//    while(N!=0);
//    cout << "La sumatoria es: " << suma << endl;

    //Ejercicio 17:
//    int N, mayor=0;
//    do{
//        cout << "Ingresa numeros, cuando ingreses el numero 0 se detendra el programa para hacer la sumatoria: ";
//        cin >> N;
//        if (N>mayor){
//            mayor=N;
//        }
//        else{
//        }
//    }
//    while(N!=0);
//    cout << "El mayor de los numeros ingresados es: " << mayor << endl;

    //Ejercicio 19:
//    cout <<"ingrese un numero: ";
//    int N,numD=0;
//    cin >> N;
//    for (int i=1;i<=N;i++){
//        if (N%i==0){
//            numD++;
//        }
//    }
//        if (numD==2){
//            cout << N << " NO es un numero primo" << endl;
//        }
//        else{
//            cout << N << " es un numero primo" << endl;
//        }

    //Ejercicio 21:
//    cout << "Ingrese una letra (Mayuscula o minuscula): ";
//    char C;
//    cin >> C;
//    int Mmay=90,mmay=65,Mmin=122,mmin=97,asci=C;
//    if (asci<=Mmay && asci>=mmay){
//        asci+=32;
//        C=asci;
//        cout << "Letra convertida: " << C << endl;
//    }
//    else if (asci<=Mmin && asci>=mmin){
//        asci-=32;
//        C=asci;
//        cout << "Letra convertida: " << C << endl;
//    }
//    else{
//        cout << "La letra ingresada no es un caracter valido para la conversión" << endl;
//    }

    //Ejercicio 23:
//    cout << "ingrese dos numeros: ";
//    int A, B;
//    cin >> A >> B;
//    int mayor=0;
//    if (A>B){
//        mayor=A;
//    }
//    else{
//        mayor=B;
//    }
//    int N=mayor;
//    while ((N%A!=0) || (N%B!=0)){
//        N++;
//    }
//    cout << "El MCM de " << A << " y " << B << " es: " << N << endl;

    //Ejercicio 25:
//    cout <<"ingrese un numero: ";
//    int N;
//    cin >> N;
//    int cifras=1, num=N;
//    while(N>=10){
//        N=N/10;
//        cifras++;
//    }
//    cout << num << " tiene " << cifras << " digitos." << endl;

    //Ejercicio 27:
//    int A, B;
//    char op;
//    cout << "Ingrese un numero, la operacion a realizar y otro numero: ";
//    cin >> A >> op >> B;
//    switch (op) {
//    case '+':
//        cout << A+B << endl;
//        break;
//    case '-':
//        cout << A-B << endl;
//        break;
//    case '*':
//        cout << A*B << endl;
//        break;
//    case '/':
//        cout << A/B << endl;
//        break;
//    default:
//        cout << "Operacion no valida" << endl;
//    }

    //Ejercicio 29:
//    int min=0, max=101, num;
//    char valor;
//    bool V=false;
//    while (V==false){
//        num = (min+1)+rand() % ((max-1) - min);
//        cout << "El numero ingresado es: " << num << endl;
//        cout << "Digite con > si el numero es mayor,< si el numero es menor o = si el numero es correcto: ";
//        cin >> valor;
//        if (num<=1){
//            num=0;
//            break;
//        }
//        else if (valor=='>'){
//            min=num;
//        }
//        else if (valor=='<'){
//            max=num;
//        }
//        else{
//            V=true;
//        }
//    }
//    cout << "El numero pensado fue: " << num << endl;

    //Problema 1:
//    cout << "Ingrese un caracter: ";
//    char Caracter;
//    int asci, min=65, max=122;
//    cin >> Caracter;
//    asci=Caracter;
//    if (asci<min || asci>max){
//        cout << Caracter << " No es ni consonante ni vocal" << endl;
//    }
//    else if ( asci==65 || asci==97 || asci==69 || asci==101 || asci==73 || asci==105 || asci==79 || asci==111 || asci==85 || asci==117){
//        cout << Caracter << " Es vocal" << endl;
//    }
//    else{
//        cout << Caracter << " Es consonante" << endl;
//    }

    //Problema 3:
//    cout << "Ingrese un dia y un mes para verificar si es una fecha valida" << endl;
//    int mes, dia;
//    cout<<"Ingrese un mes: ";
//    cin>>mes;
//    cout<<"Ingrese un dia de ese mes: ";
//    cin>>dia;
//    if(mes>=1 and mes<=12){
//        switch (mes){
//        case 1:
//        case 3:
//        case 5:
//        case 7:
//        case 8:
//        case 10:
//        case 12:
//            if (dia>=1 and dia<=31) cout<<mes<<"/"<<dia<<" es una fecha valida."<<endl;
//            else
//                cout<<mes<<"/"<<dia<<" es una fecha invalida."<<endl;
//            break;
//       case 4:
//       case 6:
//       case 9:
//       case 11:
//            if (dia>=1 and dia<=30) cout<<mes<<"/"<<dia<<" es una fecha valida."<<endl;
//            else
//                cout<<mes<<"/"<<dia<<" es una fecha invalida."<<endl;
//            break;
//      case 2:{
//            if (dia>=1 and dia<=28) cout<<mes<<"/"<<dia<<" es una fecha valida."<<endl;
//            else if (dia>=1 and dia<=29) cout<<mes<<"/"<<dia<<" es una fecha valida en año bisiesto."<<endl;
//            else
//                cout<<mes<<"/"<<dia<<" es una fecha invalida."<<endl;}
//            break;

//    }
//    }
//    else{
//        cout<<mes<<" es un mes invalido."<<endl;
//    }

    //Problema 5:
//    cout << "Ingrese un numero impar: ";
//    int impar, cor;
//    cin >> impar;
//    cor = (impar/2)+1;
//    if(impar%2!=0){
//        for (int i=0;i<cor;++i){
//            for (int j=0; j < impar-i-cor;++j){
//                cout << " ";
//            }
//            for (int j=0; j < 2*i+1;++j){
//                cout << "*";
//            }
//            cout << endl;
//        }
//        for (int i=(impar/2)-1;i>=0;--i){
//            for (int j=0; j < impar-i-cor;++j){
//                cout << " ";
//            }
//            for (int j=0; j < 2*i+1;++j){
//                cout << "*";
//            }
//            cout << endl;
//        }
//    }
//    else{
//        cout << "El numero no es impar, por ende no es posible realizar la figura" << endl;
//    }

    //Problema 7:
//    cout << "Ingrese un numero para calcular la suma fibonacci de los numeros pares menores al numero elegido: ";
//    int n, ant=0, desp=1, aux=0, par=0;
//    cin >> n;
//    while(aux<=n){
//        if (aux%2==0){
//            par+=aux;
//        }
//        aux=ant+desp;
//        ant=desp;
//        desp=aux;
//    }
//    cout << "El resultado de la suma de los numeros pares es: " << par << endl;

    //Problema 9:
//    cout << "Ingrese el entero para realizar la suma de cada digito elevado a si mismo: ";
//    int N, digito=0, potencia=0,sum=0;
//    cin >> N;
//    while (N>0){
//        digito=N%10;
//        potencia=digito;
//        for (int i=1; i<digito;i++){
//            potencia*=digito;
//        }
//        sum+=potencia;
//        N=N/10;
//    }
//    cout << "El resultado de la suma es: " << sum << endl;

    //Problema 11:
//    cout << "Ingrese un numero: ";
//    int N, cont=1, guarda=0;
//    cin >> N;
//    for (int i=N;i!=guarda;){
//        for (int j=N;j>0;j--){
//            if (i%j==0){
//                guarda=i;
//            }
//            else{
//                cont++;
//                i=N*cont;
//                break;
//            }
//        }
//    }
//    cout << "El minimo comun de todos los digitos es: " << guarda << endl;

    //Problema 13:
//   cout << "Ingrese un numero para hallar la suma de sus numeros primos menores que el: ";
//   int N, numD=0, sum=0;
//   cin >> N;
//   for (int j=N;j>0;j--){
//        numD=0;
//        for (int i=1;i<=j;i++){
//            if (j%i==0){
//                   numD++;
//                   if (numD==3){
//                       numD=0;
//                       break;
//                   }
//               }
//           }
//               if (numD==2){
//                   sum=j+sum;
//               }
//    }
//   cout << "El resultado de la suma es: " << sum << endl;

    //Problema 15:
//    cout << "Ingrese un numero impar el cual sera el tamano de la espiral para el calculo de la suma de sus diagonales: ";
//    int num,sumadiagonal=1;
//    cin>>num;
//    if (num%2==1){
//        for(;num!=1;num-=2){
//        sumadiagonal+=4*num*num-6*(num-1);
//    }

//        cout<<"En una espiral de "<<num<<"x"<<num<<", la suma es:"<<sumadiagonal<<endl;
//        }
//    else cout<<num<<" no es un numero impar."<<endl;

    //Problema 17:
//    cout << "Ingrese un numero para hallar el primer numero triangular con esa cantidad de divisores: ";
//    int n, tria=0, cont=0;
//    cin >> n;
//    for (int i=1;i>0;i++){
//        tria=i*(i+1)/2;
//        for (int j=1;j<=tria;j++){
//            if(tria%j==0)
//                cont++;
//        }
//        if (cont>=n){
//            cout << "El numero es: " << tria << " que tiene " << cont << " divisores." << endl;
//            break;
//        }
//        else
//            cont=0;
//    }
    return 0;
}
