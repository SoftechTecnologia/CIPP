#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
// Declara��o das fun��es dos programas
int pdfreader(){
    printf("\n  Nome: PDF Architect");
    printf("\n  Descri��o: Leitor de arquivos PDF");}
int pdfreaderinstall(){
    printf("Instalando o PDF Architect.\n\n  Aguarde...\n\n  ");
    system("start /wait Programas/PDFArchitect.exe /quiet");
    printf("\n  PDF Architect foi instalado com sucesso.\n");
    system("timeout 3"); system("cls");}
int pcoptimizer(){
    printf("\n  Nome: CCleaner (Free Version)");
    printf("\n  Descri��o: Otimizador do sistema operacional");}
int pcoptimizerinstall(){
    printf("Instalando o CCleaner.\n\n  Aguarde...\n\n  ");
    system("start /wait Programas/CCleaner.exe /silent /install");
    printf("\n  CCleaner foi instalado com sucesso.\n");
    system("timeout 3"); system("cls");}
int cddvdburner(){
    printf("\n  Nome: CD Burner XP");
    printf("\n  Descri��o: Gravador de CDs e DVDs");}
int cddvdburnerinstall(){
    printf("Instalando o CD Burner XP.\n\n  Aguarde...\n\n  ");
    system("start /wait Programas/CDBurnerXP.exe /VERYSILENT /SUPPRESSMSGBOXES /NORESTART /SP-");
    printf("\n  CD Burner XP foi instalado com sucesso.\n");
    system("timeout 3"); system("cls");}
int navigator(){
    printf("\n  Nome: Google Chrome");
    printf("\n  Descri��o: Navegador");}
int navigatorinstall(){
    printf("Instalando o Google Chrome.\n\n  Aguarde...\n\n  ");
    system("start /wait Programas/GoogleChrome.exe /silent /install");
    printf("\n  Google Chrome foi instalado com sucesso.\n");
    system("timeout 3"); system("cls");}
int office(){
    printf("\n  Nome: LibreOffice");
    printf("\n  Descri��o: Manipulador de arquivos de escrit�rio");}
int officeinstall(){
    printf("Instalando o LibreOffice.\n\n  Aguarde...\n\n  ");
    system("start /wait Programas/LibreOffice.msi /quiet");
    printf("\n  LibreOffice foi instalado com sucesso.\n");
    system("timeout 3"); system("cls");}
int zipper(){
    printf("\n  Nome: 7-Zip");
    printf("\n  Descri��o: Compactador/descompactador de arquivos");}
int zipperinstall(){
    printf("Instalando o 7-Zip.\n\n  Aguarde...\n\n  ");
    system("start /wait Programas/7-Zip.exe /S");
    printf("\n  7-Zip foi instalado com sucesso.\n");
    system("timeout 3"); system("cls");}
int onlinehelp(){
    printf("\n  Nome: TeamViewer");
    printf("\n  Descri��o: Suporte t�cnico remoto");}
int onlinehelpinstall(){
    printf("Instalando o TeamViewer.\n\n  Aguarde...\n\n  ");
    system("start /wait Programas/TeamViewer.exe /S");
    printf("\n  TeamViewer foi instalado com sucesso.\n");
    system("timeout 3"); system("cls");}
int antivirus(){
    printf("\n  Nome: Microsoft Security Essentials");
    printf("\n  Descri��o: Protetor antiv�rus");}
int antivirusinstall(){
    printf("Instalando o Microsoft Security Essentials.\n\n  Aguarde...\n\n  ");
    system("start /wait Programas/MSE.exe /s /runwgacheck");
    printf("\n  Microsoft Security Essentials foi instalado com sucesso.\n");
    system("timeout 3"); system("cls");}
int videoplayer(){
    printf("\n  Nome: Media Player Classic");
    printf("\n  Descri��o: Player de v�deo");}
int videoplayerinstall(){
    printf("Instalando o Media Player Classic.\n\n  Aguarde...\n\n  ");
    system("start /wait Programas/MPC.exe /VERYSILENT /SUPPRESSMSGBOXES /NORESTART /SP-");
    printf("\n  Media Player Classic foi instalado com sucesso.\n");
    system("timeout 3"); system("cls");}
int pluginweb(){
    printf("\n  Nome: Microsoft Silverlight");
    printf("\n  Descri��o: Aprimorador da experi�ncia de navega��o na web");}
int pluginwebinstall(){
    printf("Instalando o Microsoft Silverlight.\n\n  Aguarde...\n\n  ");
    system("start /wait Programas/Silverlight.exe /q /s");
    printf("\n  Microsoft Silverlight foi instalado com sucesso.\n");
    system("timeout 3"); system("cls");}
int java(){
    printf("\n  Nome: Java");
    printf("\n  Descri��o: M�quina virtual para execu��o de programas");}
int javainstall(){
    printf("Instalando o Java.\n\n  Aguarde...\n\n  ");
    system("start /wait Programas/Java.exe /s");
    printf("\n  Java foi instalado com sucesso.\n");
    system("timeout 3"); system("cls");}
int torrent(){
    printf("\n  Nome: uTorrent");
    printf("\n  Descri��o: Programa de downloads via Torrent");}
int torrentinstall(){
    printf("Instalando o uTorrent.\n\n  Aguarde...\n\n  ");
    system("start /wait Programas/uTorrent.exe /PERFORMINSTALL 2");
    printf("\n  uTorrent foi instalado com sucesso.\n");}
int softechhelp(){
    printf("\n  Suporte Softech");
    printf("\n  Acesso r�pido aos contatos da Softech\n\n");}
int softechhelpinstall(){
    printf("Instalando atalho para o Suporte Softech.\n\n  Aguarde...\n\n");
    system("xcopy Programas\\stsupport.exe %windir%");
    printf("\n");
    system("reg import Programas\\softech.reg");
    printf("\n  Acesso r�pido ao suporte da Softech instalado com sucesso.\n\n");
    system("timeout 3"); system("cls");}
// Programa
int main(){
    // Apresenta��o
    setlocale(LC_ALL, "Portuguese");
    system("title CIPP - Customized Installer of Program Package");
    printf("\n  ***********   ***********   ************   ************\n");
    printf("  ***********   ***********   ************   ************\n");
    printf("  ***               ***       ***      ***   ***      ***\n");
    printf("  ***               ***       ************   ************\n");
    printf("  ***               ***       ************   ************\n");
    printf("  ***               ***       ***            ***\n");
    printf("  ***               ***       ***            ***\n");
    printf("  ***********   ***********   ***            ***\n");
    printf("  ***********   ***********   ***            ***\n\n");
    printf("             Licensa vital�cia para a Softech            \n\n");
    printf("                Desenvolvido pela Softech�               \n\n");
    system("timeout 7"); system("cls");
    // Informa��es gerais
    printf("\n  Bem-vindo ao Instalador Personalizado de Pacotes de Programas (CIPP), vers�o 32bits (x86)");
    printf("\n\n  Antes de prosseguir, maximize a janela para visualizar melhor as informa��es.\n\n");
    system("timeout 7"); system("cls");
    // Programas � serem instalados
    printf("\n  Esse software realizar� a instala��o dos seguintes programas:");
    printf("\n\n  #01"); pdfreader();
    printf("\n\n  #02"); pcoptimizer();
    printf("\n\n  #03"); cddvdburner();
    printf("\n\n  #04"); navigator();
    printf("\n\n  #05"); office();
    printf("\n\n  #06"); zipper();
    printf("\n\n  #07"); onlinehelp();
    printf("\n\n  #08"); antivirus();
    printf("\n\n  #09"); videoplayer();
    printf("\n\n  #10"); pluginweb();
    printf("\n\n  #11"); java();
    printf("\n\n  #12"); torrent();
    printf("\n\n  *"); softechhelp();
    system("pause"); system("cls");
    // Aviso
    printf("\n  Ser� necess�rio desativar as confirma��es do Administrador, no item \"Contas\n");
    printf("  de Usu�rio\", em \"Painel de Controle\". Caso contr�rio aparecer� a janela de\n");
    printf("  confirma��o \"Executar como Administrador\" aparecer� insistentemente, mas n�o\n");
    printf("  afetar� o resultado da instala��o.\n\n");
    system("timeout 10");
    system("cls");
    printf("\n  Por favor, aguarde o fim dos procedimentos, tendo em vista que esta janela");
    printf("\n  deve sempre ficar vis�vel.\n");
    system("timeout 7"); system("cls");
    // In�cio da instala��o
    printf("\n  01/12 - "); pdfreaderinstall();
    printf("\n  02/12 - "); pcoptimizerinstall();
    printf("\n  03/12 - "); cddvdburnerinstall();
    printf("\n  04/12 - "); navigatorinstall();
    printf("\n  05/12 - "); officeinstall();
    printf("\n  06/12 - "); zipperinstall();
    printf("\n  07/12 - "); onlinehelpinstall();
    printf("\n  08/12 - "); antivirusinstall();
    printf("\n  09/12 - "); videoplayerinstall();
    printf("\n  10/12 - "); pluginwebinstall();
    printf("\n  11/12 - "); javainstall();
    printf("\n  12/12 - "); torrentinstall();
    printf("\n  * - "); softechhelpinstall();
    //Finaliza��o
    printf("\n  Todas os programas foram instalados com �xito.\n");
    system("timeout 7");
    printf("\n  Obrigado por utilizar o CIPP.");
    printf("\n\n  Software desenvolvido pela Softech�.");
	printf("\n\n  Reclama��es, d�vidas ou sugest�es?");
    printf("\n  Envie-nos atrav�s do nosso email:");
    printf("\n\n  adm@softechtecnologia.hol.es");
	printf("\n\n  Ou atrav�s do nosso site:");
    printf("\n\n  http://softechtecnologia.hol.es\n\n");
    system("pause");
    system("start %windir%/stsupport.exe");
}
