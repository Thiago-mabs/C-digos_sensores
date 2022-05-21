const int SensorTensaoPin=A1; //Declarando a porta que o sensor está localizado
float TensaoSaida;
float ValorTensao;
int R1 = 30000;
int R2 = 7500;
void setup(){
    Serial.begin(9600);
}
void loop(){
    ValorTensao = analogRead(SensorTensaoPin); //Leitura analógica do valor de entrada do sensor
    TensaoSaida = (ValorTensao * 5)/1024; // Conversão para o valor de sáida (variando de 0-5v)
    TensaoSaida = TensaoSaida * (R2/(R1+R2));
    Serial.print("Tensão: ");
    Serial.print(TensaoSaida, 2);
    Serial.print("V"); 
    delay(1000);
}
