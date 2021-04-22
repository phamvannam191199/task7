#include <stdio.h>
#include <stdlib.h>

int main()
{	int budget = 10000000;  //      10.000.000 $
	int id,pin,select,w,newpin1,newpin2,checkpin,default_Pin,default_id,trueValue = 0,slang,lang;
	char s;
	do
	{slang = 0;			//         bien lap neu ky tu chon ngon ngu khong dung
	printf("Select Language: \n 1.ENGLISH \n 2.TIENG VIET\n\nSelect:"); // chon ngon ngu
	scanf("%d",&lang);
	system("cls");
	switch (lang)
	{
		case 1:		//ENGLISH LANGUAGE
			{
						
						printf("Set ID is :");	// DAT MA THE MAC DINH
						scanf("%d",&default_id);
						
						printf("Set your default Pin:"); // DAT MA PIN MAC DINH
						scanf("%d",&default_Pin);
					
						printf("\n\nEnter your ID:"); // NHAP MA THE
						scanf("%d",&id);	
						printf("Enter your Password(2):\n"); // NHAP MA PIN
						scanf("%d",&pin);
						
						if(id == default_id && pin == default_Pin)	// HAM IF NEU MA THE VA MA PIN DUNG
						{
							do		// VONG LAP DO WHILE LAP LAI NEU LUA CHON KHONG PHAI LA 1 HOAC 2.
							{	system("cls");
								printf("--------WELLCOME TO JP-BANK--------\n \t \tMENU\n --------------------------------- \n 1.Withdraw Money \n 2.Change your Password \n");
								fflush(stdin);
								scanf("%c",&select);
								switch (select)   					//HAM SWITCH CASE  LUA CHON RUT TIEN HOAC DOI MAT KHAU
								{	
									case '1':						// CASE RUT TIEN
									{	do							// VONG LAP DO WHILE LAP LAI NEU LUA CHON KHONG PHAI TU 1 - 7 
										{
										trueValue = 0;				//GAN BIEN LAP
										system("cls");				// XOA MAN HINH				
										printf("Select the money you want to withdraw (1 - 7):\n 1.100.000\n 2.200.000\n 3.500.000\n 4.1.000.000\n 5.3.000.000\n 6.5.000.000\n 7.Other amount \n ");
										printf("Select:");
										fflush(stdin);
										scanf("%d",&select);
										
											switch(select)		//HAM SWITCH CASE LUA CHON PHUONG AN 
											{
												case 1:
													w = 100000;
												break;
												case 2:
													w = 200000;
												break;
												case 3:
													w = 500000;
												break;
												case 4:
													w = 1000000;
												break;
												case 5:
													w = 3000000;
												break;
												case 6:
													w = 5000000;
												break;
												case 7:
													do			//VONG LAP DO- WHILE NEU SO TIEN NHAP VAO KHONG CHIA HET CHO 50 SE BAT NHAP LAI
													{
													printf("Withdraw: ");
													fflush(stdin);
													scanf("%d",&w);
													if (w % 50 != 0)
														{
														printf("Invalid amount, please enter again: \n");
														printf("Other amount: ");
														fflush(stdin);
														scanf("%d",&w);
														}
													}while (w % 50 !=0);
												break;
												default:
													trueValue = 1;		// GAN BIEN LAP = 1 KHI KHONG CO LUA CHON NAO DUOC CHON --> CHON LAI
												break;
											}
											}while(trueValue == 1);	
												if(w > budget) 			//  NEU SO TIEN CAN RUT > SO DU TAI KHOAN THI SE KHONG THUC HIEN DUOC
												{
													printf("Your money is not enough to make the Withdraw,please enter again: \n");
												}else if(w <= budget) 	//  NEU SO TIEN CAN RUT < SO DU TAI KHOAN 
													printf("Withdraw successfully %d$, Account balance :%d$\n",w,budget - w); //RUT TIEN THANH CONG
													budget =budget-w; 					//LUU LAI SO DU TRONG TAI KHOAN
													printf("Do you want to continue (y-n): \n");	//THUC HIEN GIAO DICH TIEP HAY KHONG
													fflush(stdin);
													scanf("%c",&s);
												}
									break;
									case '2': // CASE DOI MAT KHAU 
									{	
										printf("\t \t Change your password:\n enter your old password:");	//
										fflush(stdin);
										scanf("%d",&newpin1);
										if(pin == newpin1)
										{	do
											{
												checkpin = 1;
												printf("Enter New Pin:");
												scanf("%d",&newpin1);
												printf("Enter New Pin again:");
												scanf("%d",&newpin2);
												if(newpin1 == newpin2)
												{	printf("Your Pin was changed!!\n");
													default_Pin = newpin1 ;
												}else
													{
													checkpin = 0;
													}
											}while(checkpin == 0);
										}
									}
									break;	
								}
					
							}while(s == 'y');
							}
							else	
								printf("Your ID or Password is incorrect, Please try again !\n"); 
							
					
			}
			break;
		case 2:
			
						
						printf("Thiet lap So The :");
						scanf("%d",&default_id);
						
						printf("Dat ma pin cua ban:");
						scanf("%d",&default_Pin);
					
						printf("Nhap ma the cua ban:\n");
						scanf("%d",&id);	
						printf("Nhap ma pin:\n");
						scanf("%d",&pin);
						
						if(id == default_id && pin == default_Pin)
						{
							do
							{	system("cls");
								printf("--------Chao mung ban den voi JP-BANK--------\n \t \tMENU\n --------------------------------- \n 1.Rut tien \n 2.Doi mat khau \n");
								fflush(stdin);
								scanf("%c",&select);
								switch (select)
								{	
									case '1':	
									{	do
										{
										trueValue = 0;
										system("cls");								
										printf("Chon so tien ban muon rut (1 - 7):\n 1.100.000\n 2.200.000\n 3.500.000\n 4.1.000.000\n 5.3.000.000\n 6.5.000.000\n 7.Khac \n ");
										printf("Select:");
										fflush(stdin);
										scanf("%d",&select);
										
											switch(select)
											{
												case 1:
													w = 100000;
												break;
												case 2:
													w = 200000;
												break;
												case 3:
													w = 500000;
												break;
												case 4:
													w = 1000000;
												break;
												case 5:
													w = 3000000;
												break;
												case 6:
													w = 5000000;
												break;
												case 7:
													do
													{
													printf("Nhap so tien: ");
													fflush(stdin);
													scanf("%d",&w);
													if (w % 50 != 0)
														{
														printf("So tien nhap vao khong hop le,vui long thu lai: \n");
														printf("Nhap so tien: ");
														fflush(stdin);
														scanf("%d",&w);
														}
													}while (w % 50 !=0);
												break;
												default:
													trueValue = 1;
												break;
											}
											}while(trueValue == 1);	
												if(w > budget)
												{
													printf("So du trong tai khoan khong du de thuc hien giao dich,Vui long thu lai: \n");
												}else if(w <= budget)
													printf("Rut tien thanh cong %d$, So du con lai :%d$\n",w,budget - w);
													budget =budget-w;
													printf("Ban co muon giao dich tiep khong ? (y-n): \n");
													fflush(stdin);
													scanf("%c",&s);
													system("cls");
												}
									break;
									case '2':
									{	
										printf("\t \t Doi mat khau:\n Nhap mat khau cu:");
										fflush(stdin);
										scanf("%d",&newpin1);
										if(pin == newpin1)
										{	do
											{
												checkpin = 1;
												printf("Nhap mat khau moi:");
												scanf("%d",&newpin1);
												printf("Nhap mat khau moi lan nua:");
												scanf("%d",&newpin2);
												if(newpin1 == newpin2)
												{	printf("Doi pass thanh cong!!\n");
													default_Pin = newpin1 ;
												}else
													{
													checkpin = 0;
													}
											}while(checkpin == 0);
										}
									}
									break;	
								}
					
							}while(s == 'y');
							}
							else	
								printf("So the hoac ma pin ban nhap khong dung, Vui long thu lai: !\n"); 
			break;			
			default:
				slang = 1;	
				printf("Invalid selection pls try agains\n");
	}		
}while(slang = 1);
}
