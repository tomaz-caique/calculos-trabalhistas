#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <conio.c>

//Desisgn
designMenu(){

	
    clrscr(); // limpa a tela
	system("Color 8F"); // define a cor de fundo
	int i;
	setlocale(LC_ALL,NULL); // deixa o locale.h como nulo
	textcolor(WHITE); //deixa o texto em branco
	gotoxy(14,7);printf("PROGRAMA DE CALCULO TRABALHISTAS"); 
		textcolor(BLUE); // deixa o "Texto Asci2" em Azul
		
		
		//cria as bordas do layout
		gotoxy(12,8);printf("%c", 200);
		gotoxy(48,8);printf("%c", 188);
		gotoxy(12,7);printf("%c", 186);
		gotoxy(48,7);printf("%c", 186);	
		gotoxy(12,6);printf("%c", 201);
		gotoxy(48,6);printf("%c", 187);
		
		// cria o layout lateral 
		for(i=13;i<48;i++)
		{
		  gotoxy(i,8);printf("%c", 205);
		  gotoxy(i,6);printf("%c", 205);
		}
		// Cria o layout vertical
		for (i=10;i<25;i++)
		{
			gotoxy(5,i);printf("%c", 186);
			gotoxy(55,i);printf("%c", 186);
	    }
	     // cria o layout da caixa de cima
	    for(i=6;i<55;i++)
		{
	    	
		    gotoxy(i,9);printf("%c", 205);	
		    gotoxy(i,25);printf("%c", 205);
		}
		
		// cria o layout da caixa de cima
		gotoxy(45,55);printf("%c", 188);
		gotoxy(5,25);printf("%c", 200);
		gotoxy(5,9);printf("%c", 201);
		gotoxy(55,9);printf("%c", 187);
	}

designInss(){
	
	
	 clrscr();
	system("Color 8F");
	int i;
	setlocale(LC_ALL,"C");
	textcolor(WHITE);
	gotoxy(22,7);printf("DESCONTO DE ISS");
		textcolor(BLUE);
		
		
		//cria o layout da introdução
		gotoxy(12,8);printf("%c", 200);
		gotoxy(48,8);printf("%c", 188);
		gotoxy(12,7);printf("%c", 186);
		gotoxy(48,7);printf("%c", 186);	
		gotoxy(12,6);printf("%c", 201);
		gotoxy(48,6);printf("%c", 187);
		
		for(i=13;i<48;i++)
		{
		  gotoxy(i,8);printf("%c", 205);
		  gotoxy(i,6);printf("%c", 205);
		}
	// Cria o layout do menu
		for (i=10;i<25;i++)
		{
			gotoxy(5,i);printf("%c", 186);
			gotoxy(55,i);printf("%c", 186);
	    }
	    for(i=6;i<55;i++)
		{
	    	
		    gotoxy(i,9);printf("%c", 205);	
		    gotoxy(i,25);printf("%c", 205);
		}
		gotoxy(45,55);printf("%c", 188);
		gotoxy(5,25);printf("%c", 200);
		gotoxy(5,9);printf("%c", 201);
		gotoxy(55,9);printf("%c", 187);
	}	

designTrans(){
	
	
	 clrscr();
	system("Color 8F");
	int i;
	setlocale(LC_ALL,"C");
	textcolor(WHITE);
	gotoxy(17,7);printf("DESCONTO DE VALE TRANSPORTE");
		textcolor(BLUE);
		
		
		//cria o layout da introdução
		gotoxy(12,8);printf("%c", 200);
		gotoxy(48,8);printf("%c", 188);
		gotoxy(12,7);printf("%c", 186);
		gotoxy(48,7);printf("%c", 186);	
		gotoxy(12,6);printf("%c", 201);
		gotoxy(48,6);printf("%c", 187);
		
		for(i=13;i<48;i++)
		{
		  gotoxy(i,8);printf("%c", 205);
		  gotoxy(i,6);printf("%c", 205);
		}
	// Cria o layout do menu
		for (i=10;i<25;i++)
		{
			gotoxy(5,i);printf("%c", 186);
			gotoxy(55,i);printf("%c", 186);
	    }
	    for(i=6;i<55;i++)
		{
	    	
		    gotoxy(i,9);printf("%c", 205);	
		    gotoxy(i,25);printf("%c", 205);
		}
		gotoxy(45,55);printf("%c", 188);
		gotoxy(5,25);printf("%c", 200);
		gotoxy(5,9);printf("%c", 201);
		gotoxy(55,9);printf("%c", 187);
	}	

designFalta(){
	
	 clrscr();
	system("Color 8F");
	int i;
	setlocale(LC_ALL,"C");
	textcolor(WHITE);
	gotoxy(22,7);printf("DESCONTO DE FALTAS");
		textcolor(BLUE);
		
		
		//cria o layout da introdução
		gotoxy(12,8);printf("%c", 200);
		gotoxy(48,8);printf("%c", 188);
		gotoxy(12,7);printf("%c", 186);
		gotoxy(48,7);printf("%c", 186);	
		gotoxy(12,6);printf("%c", 201);
		gotoxy(48,6);printf("%c", 187);
		
		for(i=13;i<48;i++)
		{
		  gotoxy(i,8);printf("%c", 205);
		  gotoxy(i,6);printf("%c", 205);
		}
	// Cria o layout do menu
		for (i=10;i<25;i++)
		{
			gotoxy(5,i);printf("%c", 186);
			gotoxy(55,i);printf("%c", 186);
	    }
	    for(i=6;i<55;i++)
		{
	    	
		    gotoxy(i,9);printf("%c", 205);	
		    gotoxy(i,25);printf("%c", 205);
		}
		gotoxy(45,55);printf("%c", 188);
		gotoxy(5,25);printf("%c", 200);
		gotoxy(5,9);printf("%c", 201);
		gotoxy(55,9);printf("%c", 187);
	}	
	
designVr(){
	
	
	 clrscr();
	system("Color 8F");
	int i;
	setlocale(LC_ALL,"C");
	textcolor(WHITE);
	gotoxy(18,7);printf("DESCONTO DE VALE REFEICAO");
		textcolor(BLUE);
		
		
		//cria o layout da introdução
		gotoxy(12,8);printf("%c", 200);
		gotoxy(48,8);printf("%c", 188);
		gotoxy(12,7);printf("%c", 186);
		gotoxy(48,7);printf("%c", 186);	
		gotoxy(12,6);printf("%c", 201);
		gotoxy(48,6);printf("%c", 187);
		
		for(i=13;i<48;i++)
		{
		  gotoxy(i,8);printf("%c", 205);
		  gotoxy(i,6);printf("%c", 205);
		}
	// Cria o layout do menu
		for (i=10;i<25;i++)
		{
			gotoxy(5,i);printf("%c", 186);
			gotoxy(55,i);printf("%c", 186);
	    }
	    for(i=6;i<55;i++)
		{
	    	
		    gotoxy(i,9);printf("%c", 205);	
		    gotoxy(i,25);printf("%c", 205);
		}
		gotoxy(45,55);printf("%c", 188);
		gotoxy(5,25);printf("%c", 200);
		gotoxy(5,9);printf("%c", 201);
		gotoxy(55,9);printf("%c", 187);
	}	

designExtra(){	

	clrscr();
	system("Color 8F");
	int i;
	setlocale(LC_ALL,"C");
	textcolor(WHITE);
	gotoxy(20,7);printf("CALCULAR HORAS EXTRA");
	textcolor(BLUE);
		
		
		//cria o layout da introdução
		gotoxy(12,8);printf("%c", 200);
		gotoxy(48,8);printf("%c", 188);
		gotoxy(12,7);printf("%c", 186);
		gotoxy(48,7);printf("%c", 186);	
		gotoxy(12,6);printf("%c", 201);
		gotoxy(48,6);printf("%c", 187);
		
		for(i=13;i<48;i++)
		{
		  gotoxy(i,8);printf("%c", 205);
		  gotoxy(i,6);printf("%c", 205);
		}
	// Cria o layout do menu
		for (i=10;i<25;i++)
		{
			gotoxy(5,i);printf("%c", 186);
			gotoxy(55,i);printf("%c", 186);
	    }
	    for(i=6;i<55;i++)
		{
	    	
		    gotoxy(i,9);printf("%c", 205);	
		    gotoxy(i,25);printf("%c", 205);
		}
		gotoxy(45,55);printf("%c", 188);
		gotoxy(5,25);printf("%c", 200);
		gotoxy(5,9);printf("%c", 201);
		gotoxy(55,9);printf("%c", 187);
	}	

designTodos(){
	 clrscr();
	system("Color 8F");
	int i;
	setlocale(LC_ALL,"C");
	textcolor(WHITE);
	gotoxy(22,7);printf("TODOS DESCONTOS");
		textcolor(BLUE);
		
		
		//cria o layout da introdução
		gotoxy(12,8);printf("%c", 200);
		gotoxy(48,8);printf("%c", 188);
		gotoxy(12,7);printf("%c", 186);
		gotoxy(48,7);printf("%c", 186);	
		gotoxy(12,6);printf("%c", 201);
		gotoxy(48,6);printf("%c", 187);
		
		for(i=13;i<48;i++)
		{
		  gotoxy(i,8);printf("%c", 205);
		  gotoxy(i,6);printf("%c", 205);
		}
	// Cria o layout do menu
		for (i=10;i<25;i++)
		{
			gotoxy(5,i);printf("%c", 186);
			gotoxy(55,i);printf("%c", 186);
	    }
	    for(i=6;i<55;i++)
		{
	    	
		    gotoxy(i,9);printf("%c", 205);	
		    gotoxy(i,25);printf("%c", 205);
		}
		gotoxy(45,55);printf("%c", 188);
		gotoxy(5,25);printf("%c", 200);
		gotoxy(5,9);printf("%c", 201);
		gotoxy(55,9);printf("%c", 187);
	}	

//Logica
textMenu(){
	
	
	setlocale(LC_ALL,""); // transforma o locale.h na lingua nativa do computador (BR)
	textcolor(WHITE); gotoxy(6,11);printf("=======Selecione o calculo que você deseja=======");
	textcolor(BLACK);
	// cria da tela de menu
	gotoxy(6,14);printf("1° Desconto Inss");
	gotoxy(6,15);printf("2° Desconto Vale Transporte");
	gotoxy(6,16);printf("3° Desconto Faltas");
	gotoxy(6,17);printf("4° Desconto Vale Refeição Alimentação");
	gotoxy(6,18);printf("5° Cálculo Hora extra");
	gotoxy(6,19);printf("6° Ver todos os descontos");
	gotoxy(8,23);printf("Digite a opção desejada: ");
	//clrscr();

		
}	

descoInss(){
	
	
	float sal; // cria variaveis 
	float descInss; 
	int menu;
	
	
	setlocale(LC_ALL,"");
//	clrscr();
	textcolor(WHITE); gotoxy(6,11);printf("============Calcule o Valor Descontado===========");
	//cria tabela de texto
	textcolor(BLACK);
	gotoxy(6,14);printf("TABELA DESCONTOS INSS");
	gotoxy(6,15);printf("ate 1.100,00 Desconto é de 7,5%");
	gotoxy(6,16);printf("de 1.100,01 até 2.203,48 é de 9%");
	gotoxy(6,17);printf("de 2.203,49 até 3.305,22 é de 12%");
	gotoxy(6,18);printf("de 3.305,23 até 6.433,57 é de 14%");
	gotoxy(6,22);printf("Insira o Salario : ");
	gotoxy(25,22); scanf("%f", &sal);
	
	// logica de desconto
	if (sal <= 1100){
					descInss = sal * 7.5 / 100 ;
					}
					if (sal >= 1101 && sal <= 2203){
					descInss = sal * 9 / 100 ;
					}
					if (sal >= 2204 && sal <= 3305){
					descInss = sal * 12 / 100 ;
					}
					if (sal >= 3306 && sal <= 6434){
					descInss = sal * 14 / 100 ;
					}
					

					gotoxy(6,23);printf("Seu desconto é de : %.2f", descInss); //exibe o desconto
					

	//cria logica para voltar ao menu
	gotoxy(6,24);printf("Digte 1 para voltar e 0 para sair (1/0): ");
	gotoxy(46,24); scanf("%d", &menu);
		if(menu == 1){
		  clrscr();	
		  setlocale(LC_ALL,"C");
		  designMenu();
		  textMenu();
		}
		else {
			exit(0);
		gotoxy(6,24);printf("Erro: ");
		}
			getch();
}

descoTrans(){
	
	float sal;
	int menu;
	
	setlocale(LC_ALL,"");
//	clrscr();
	textcolor(WHITE); gotoxy(6,11);printf("==========Calcule o Valor Descontado VT==========");
	textcolor(BLACK);
	gotoxy(6,14);printf("Desconto vale transporte");
	gotoxy(6,15);printf("O desconto é de 6 por cento do salario");
	gotoxy(6,16);printf("Insira o Salario: ");
	gotoxy(25,16); scanf("%f", &sal);
	
	
	sal = sal * 0.06;	
					

	gotoxy(6,23);printf("Seu desconto é de : %.2f Reais", sal);
	
		gotoxy(6,24);printf("Digte 1 para voltar e 0 para sair (1/0): ");
		gotoxy(46,24); scanf("%d", &menu);
	
		if(menu == 1){
		  clrscr();	
		  setlocale(LC_ALL,"C");
		  designMenu();
		  textMenu();
		}
		else {
		;;	exit(0);
			gotoxy(6,24);printf("Erro: ");
		}
			getch();

}

descoFalta(){
		float sal;
		float falta;
		float diasTrab;
		int menu;
	setlocale(LC_ALL,"");
//	clrscr();
	textcolor(WHITE); gotoxy(6,11);printf("===========Calcule o desconto de faltas==========");
	textcolor(BLACK);
	gotoxy(6,14);printf("Desconto de faltas");
	gotoxy(6,15);printf("Insira o Salario: ");
	gotoxy(23,15); scanf("%f", &sal);
	gotoxy(6,16);printf("Insira a quantidade de dias trabalhados: ");
	gotoxy(46,16); scanf("%f", &diasTrab);
	gotoxy(6,17);printf("Insira a quantidade de dias que faltou: ");
	gotoxy(45,17); scanf("%f", &falta);
	
	sal = (sal/diasTrab) * falta;
		
					

	gotoxy(6,23);printf("Seu desconto é de : %.2f Reais", sal);
	
		gotoxy(6,24);printf("Digte 1 para voltar e 0 para sair (1/0): ");
		gotoxy(46,24); scanf("%d", &menu);
	
		if(menu == 1){
		  clrscr();	
		  setlocale(LC_ALL,"C");
		  designMenu();
		  textMenu();
		}
		else {
		;;	exit(0);
			gotoxy(6,24);printf("Erro: ");
		}
			getch();
}

descoVr(){
		
	float sal;
	int menu;
	setlocale(LC_ALL,"");
	textcolor(WHITE); gotoxy(6,11);printf("===========Calcule o Valor Descontado VR=========");
	textcolor(BLACK);
	gotoxy(6,14);printf("Desconto vale refeição");
	gotoxy(6,15);printf("O desconto é de 2 por cento do salario");
	gotoxy(6,16);printf("Insira o Salario: ");
	gotoxy(23,16); scanf("%f", &sal);
	
	
	sal = sal * 0.02;	
					

	gotoxy(6,23);printf("Seu desconto é de: %.2f Reais", sal);
	
		gotoxy(6,24);printf("Digte 1 para voltar e 0 para sair (1/0): ");
		gotoxy(46,24); scanf("%d", &menu);
	
		if(menu == 1){
		  clrscr();	
		  setlocale(LC_ALL,"C");
		  designMenu();
		  textMenu();
		}
		else {
		;;	exit(0);
			gotoxy(6,24);printf("Erro: ");
		}

	getch();
}

acresExtra(){	
		float sal;
		float extra;
		float horasTrab;
		int menu;
	setlocale(LC_ALL,"");
//	clrscr();
	textcolor(WHITE); gotoxy(6,11);printf("=======Calcule o o acrescimo de horas extra======");
	textcolor(BLACK);
	gotoxy(6,14);printf("Na Horas é o valor do salrio p/hora");
	gotoxy(6,15);printf("Mais 50 por cento ");
	gotoxy(6,16);printf("Insira o Salario: ");
	gotoxy(23,16); scanf("%f", &sal);
	gotoxy(6,17);printf("Insira as horas trabalhadas/mês: ");
	gotoxy(38,17); scanf("%f", &horasTrab);
	gotoxy(6,18);printf("Insira as horas trabalhadas extra: ");
	gotoxy(40,18); scanf("%f", &extra);
	
	
	sal = (sal/horasTrab) * extra;
	sal = sal * 1.5;
		
					

	gotoxy(6,23);printf("Seu acrescimo é de: %.2f Reais", sal);
	
		gotoxy(6,24);printf("Digte 1 para voltar e 0 para sair (1/0): ");
		gotoxy(46,24); scanf("%d", &menu);
	
		if(menu == 1){
		  clrscr();	
		  setlocale(LC_ALL,"C");
		  designMenu();
		  textMenu();
		}
		else {
		;;	exit(0);
			gotoxy(6,24);printf("Erro: ");
		}
			getch();

}

descoTodos(){
		
	float sal; // cria variaveis 
	float salT;
	float salF;
	float salV;
	float salE;
	float descInss; 
	float diasTrab;
	float falta;
	float horasTrab;
	float extra;
	int menu;
	
	
	setlocale(LC_ALL,"");
	//	clrscr();
	textcolor(WHITE); gotoxy(6,11);printf("=======+=====Calcule Todos Descontos=====+======");
	//cria tabela de texto
	textcolor(BLACK);
	gotoxy(6,14);printf("Insira o sálario:");
	gotoxy(23,14); scanf("%f", &sal);
	gotoxy(6,15);printf("Insira a quantidade de dias trabalhados: ");
	gotoxy(46,15); scanf("%f", &diasTrab);
	gotoxy(6,16);printf("Insira a quantidade de dias que faltou: ");
	gotoxy(45,16); scanf("%f", &falta);
	gotoxy(6,17);printf("Insira as horas trabalhadas/mês: ");
	gotoxy(38,17); scanf("%f", &horasTrab);
	gotoxy(6,18);printf("Insira as horas trabalhadas extra: ");
	gotoxy(40,18); scanf("%f", &extra); 
	
	
	
	// logica de desconto
	if (sal <= 1100){
					descInss = sal * 7.5 / 100 ;
					}
					if (sal >= 1101 && sal <= 2203){
					descInss = sal * 9 / 100 ;
					}
					if (sal >= 2204 && sal <= 3305){
					descInss = sal * 12 / 100 ;
					}
					if (sal >= 3306 && sal <= 6434){
					descInss = sal * 14 / 100 ;
					}
					
					gotoxy(6,19);printf("Seu desconto inss é de : %.2f", descInss); //exibe o desconto
					
		salT = sal * 0.06; 
		salF = (sal/diasTrab) * falta;
		salV = sal * 0.02;
		salE = (sal/horasTrab) * extra;
		salE = salE * 1.5;
			
			gotoxy(6,20);printf("Seu desconto VT é de  %.2f Reais", salT);
			gotoxy(6,21);printf("Seu desconto de Falta é de: %.2f Reais", salF);
			gotoxy(6,22);printf("Seu desconto VR é de: %.2f Reais", salV);
			gotoxy(6,23);printf("Seu acrescimo é de: %.2f Reais", salE);
			
					

	//cria logica para voltar ao menu
	gotoxy(6,24);printf("Digte 1 para voltar e 0 para sair (1/0): ");
	gotoxy(46,24); scanf("%d", &menu);
		if(menu == 1){
		  clrscr();	
		  setlocale(LC_ALL,"C");
		  designMenu();
		  textMenu();
		}
		else {
			exit(0);
		gotoxy(6,24);printf("Erro: ");
		}
			getch();
	}

//menu
menu(){
		int menu = 1; 
		
		
		do {
		scanf("%d", &menu);
		//system("cls || clear");
		
		switch(menu){
	
		case 1: 
		setlocale(LC_ALL,NULL);
			designInss();
			descoInss();
			break;
		case 2 :
			designTrans();
			descoTrans();
			break;
			
		case 3 :
			designFalta();
			descoFalta();
			break;	
		case 4 : 
			designVr();
			descoVr();
		 case 5 : 
			designExtra();
			acresExtra();
			break;
		case 6 :
			designTodos();
			descoTodos();
			break;
			
		default : 
		gotoxy(8,24);printf("Digite uma opcao valida por favor:");
		break;
	}
 } while (menu);
//return 0;
}

main(){
	
	designMenu();
	textMenu();	
	menu();
}
