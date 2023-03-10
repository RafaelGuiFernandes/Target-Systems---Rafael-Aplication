#include <iostream>    // input and output

using namespace std;

#define CAR_SPEED    1;    // per minute
#define TRUCK_SPEED  1.333;    // per minute

class Vehicles{
        
    public:

        double Total_km ;

        class myCar
        {
            public:

            double car_km;
            double car_speed;
            double car_distance;

        };

        class myTruck
        {
            public:

            double truck_km;
            double truck_speed;
            double truck_distance;

        };

        // definir valores inciais
        void startEngine( myCar& Car , myTruck& Truck )
        {
            Total_km = 0;

            Car.car_km = 0;
            Car.car_speed = CAR_SPEED;
            Car.car_distance = 0;     // from ribeirao preto

            Truck.truck_km = 0;
            Truck.truck_speed = TRUCK_SPEED;
            Truck.truck_distance = 100 ; // from ribeirao preto
        }


        void anMinute( myCar& Car , myTruck& Truck )
        {
            Car.car_km = Car.car_km + Car.car_speed ;
            Truck.truck_km = Truck.truck_km + Truck.truck_speed;
            Total_km = Car.car_km + Truck.truck_km;
        }


        void pedagio( myTruck& Truck )
        {
            Truck .truck_km = Truck.truck_km - 10*Truck.truck_speed;
        }

        bool result ( myCar& Car , myTruck& Truck )
        {
            bool result;
            // se carro mais perto de ribeirao preto
            if( Car.car_distance + Car.car_km < Truck.truck_distance - Truck.truck_km  )   
            {
                result = true;
            }
            return(result);
        }
};

int main ()
{
    // Criar veiculos
    Vehicles vehicles;
    Vehicles::myCar car;
    Vehicles::myTruck truck;

    // iniciar
    vehicles.startEngine( car , truck );

    // pagar pedagio
    vehicles.pedagio( truck );

    // de minuto em minuto ate os dois percorrerem juntos 100 km 
    // nao muito preciso
    while( vehicles.Total_km < 100  )
    {
        vehicles.anMinute(car , truck );
    }
    
      
    // mostrar quem percorreu mais no momento de encontro
    if( vehicles.result( car , truck ) ){
        cout << "O Carro esta mais proximo de ribeirao preto: "     << car.car_distance + car.car_km ;
    }
    else{ 
        cout << "O Caminhao esta mais proximo de ribeirao preto: "  << truck.truck_distance - truck.truck_km  ;
    }
    
    return (0);
}

