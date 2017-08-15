#include<iostream>
using namespace std;

int potencia(int a, int n){
    int pot=1;
    int i=0;
    for(i=0;i<n;i++){
        pot=pot*a;
    }
    return pot;
}

int busquedaFuerzaBruta(int k,int n, int a[]){
	int i=0;
	for(i=0;i<n;i++){
		if(a[i]==k){
			return i;
		}
	}
	return -1;
}

void ordenamientoBurbuja(int a[],int n){
	int i=0;
    int j=0;
    int temp=0;
    for(i=0;i<n-2;i++){
        for(j=0;j<n-2;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

                }
            }
    }
    for(i=0;i<n;i++){
    	cout<<a[i]<<endl;
    }
}

void ordenamientoSeleccion(int a[],int n){
	int temp=0;
	int i=0;
	int j=0;
	int min=0;
	for(i=0;i<n-1;i++){
		min=i;
		for(j=i+1;j<n;j++){
			if(a[j]<a[min]){
				temp=a[j];
				a[j]=a[min];
				a[min]=temp;
			}

		}
	}
	for(i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}


int emparejamientoCadenas(char *largo,int n, char *patron,int m){
	int i=0;
	int j=0;
	for(i=0;i<n-m;i++){
		int j=0;
		while(j<m && patron[j]==largo[i+j]){
		    j++;
		}
		if(j==m){
		  return i;
			
		}

	}
	return -1;
}
