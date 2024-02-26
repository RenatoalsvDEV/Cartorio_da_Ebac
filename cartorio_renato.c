#include <stdio.h> //blblioteca de comunica��o de usuario
#include <stdlib.h> //biblioteca de aloca��o de espa�o em memorio
#include <locale.h> //blblioteca de aloca��es de texto por regi�o
#include <string.h> //biblioteca respons�vel por cuidar das strings

int registro() //Fun��o responsalvel por cadastrar os usu�rios no sistema
{
	//inicio da cria��o de vari�veis/string
   char arquivo[40];
   char cpf [40];
   char nome[40];
   char sobrenome[40];
   char cargo[40];
   //final da cria��o de vari�veis/string
   
   printf("Digite o CPF a ser cadastrado: "); //coletando informa��es do usuario
   scanf("%s",cpf); // %s refere-se a string
   
   strcpy(arquivo, cpf); //Responsavel por copiar os valores das strings
   
   FILE *file; //cria o arquivo
   file = fopen(arquivo, "w"); //cria o arquivo e o "w"  signifca escrever
   fprintf(file,cpf); //salva o valor da variavel
   fclose(file); //fecha o arquivo
   
   file = fopen(arquivo, "a"); //"a" atualiza o arquivo
   fprintf(file,","); //fprintf armazenar dentro do arquivo e a "," serve para separar as informa��es
   fclose(file);
   
   printf("Digite o nome a ser cadastrado: ");
   scanf("%s",nome);
   
   file = fopen(arquivo, "a");
   fprintf(file,nome);
   fclose(file);
   
   file = fopen(arquivo, "a");
   fprintf(file,",");
   fclose(file);
   
   printf("Digite o sobrenome a ser cadastrado: ");
   scanf("%s",sobrenome);
   
   file = fopen(arquivo, "a");
   fprintf(file,sobrenome);
   fclose(file);
   
   file = fopen(arquivo, "a");
   fprintf(file,",");
   fclose(file);
   
   printf("Digite o cargo a ser cadastrado: ");
   scanf("%s",cargo);
   
   file = fopen(arquivo, "a");
   fprintf(file,cargo);
   fclose(file);
   
   system("pause");
   
   
   
   
}
int consulta()
{
	setlocale(LC_ALL, "Portuguese");
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado: ");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)//serve para quando o usuario pesquisar uma informa��o inexistente
	{
		printf("n�o foi possivel abrir o arquivo, n�o localizado!. \n");
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas s�o as informa��es do usuario: ");
		printf("%s", conteudo);
		printf("\n\n");
	}
	
	    system("pause");
	

}
int deletar()
{
	char cpf[40];
	
	printf("Digite o CPF do usu�rio a ser deletado: ");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("O usu�rio n�o se encontra no sistema!. \n"); //Afirmando que o usuario foi deletado
		system("pause");
	}
	
}


int main()
{
	int opcao=0; //defenindo variaveis 
	int paco=1;
    char senhadigitada[10]="a";
    	
    	printf("### Cartorio da EBAC ###\n\n");
    	printf("Login de administrador!\n\nDigite a sua senha: ");
    	scanf("%s",senhadigitada);
    	
    	if(senhadigitada[10] = "admin");
    	{
		
		
	       for(paco=1;paco=1;)
	       {
	
	    	
	
	             setlocale(LC_ALL, "Portuguese"); //definindo a linguagem
	 
	             printf("### Cartorio da EBAC ###\n\n"); //inicio do menu
	             printf("Escolha a op��o desejada no menu:\n\n");
	             printf("\t1 - Registrar nomes\n");
	             printf("\t2 - Consultar nomes\n");
	             printf("\t3 - Deletar nomes\n\n"); 
	             printf("\t4 - Sair do sistema\n\n");
	             printf("\t    op��o:"); // fim do menu

	             scanf("%d", &opcao); //armazenando a escolha do usuario
	
	             system("cls"); // responsavel por limpar a tela
	    
	             switch (opcao)//inicio da sele��o
	            { 
     	      	case 1:
		    	registro(); //chamada de fun��es
	            break;
	    		
	      	    case 2:
		        consulta();
		        break;
		           
	            case 3:
	    	    deletar();
	    	    break;
		    
	    	    case 4:
    	        printf("Obrigado por utilizar o sistema!\n");
	            return 0;
    	        break;
	        
	    	    default:
	    	    printf("essa op��o nao esta disponivel!\n"); 
   	 	        system("pause");
			   	break;//fim do menu   
               }  
       }   }   
}

