#include<iostream>
#include<iomanip>

using namespace std ;

class Temprature {	
    private : 
    double temprature ;
	public :
	double temprature () ;
	
	bool istEthlyFreezing () const {
	 return temprature <= -173;
	}
	bool istEthlyBoiling () const {
	return temprature >= 78.4;
	}
	bool istOxygenFreezing () const {
    return temprature <= -218.8;
	}
	bool istOxygenBoiling () const {
	return temprature >= -183;
	}
	bool istWaterFreezing () const {
	return temprature<= 0;
	}
	bool istWaerBoiling () const {
	return temprature>= 100;
}
};
int main (){                           //-218.8,-183,-173 , 0,78.4,100
	Temprature temp ;
	cout << " Enter a temprature : " ;
	cin>>temp.temprature() ;
	
	
	if ( -219<temp<0 ){
		cout<<" oxygen is freeze " << temprature.istOxygenFreezing() <<endl;
		cout<<"oxygen is boil " << temprature.istOxygenBoiling()<<endl;
		cout<<<"ethly alcohol is freeze " <<temprature.istEthlyFreezing() <<endl ;
	} 
	else if ( temprature.temprature =0){
		cout << " water is freeze " << temprature.istWaterFreezing() <<endl;
	}
	 else (120 >temprature.temprature>0 ) {
		cout << "ethly alcohol is boil " << temprature.istEthlyBoiling() << endl;
		cout << "water is boil " << temprature.istWaerBoiling() << endl ;
	}
	return 0 ;
}



