const int SensorCorrentePin=A0;//Declarar sensor
float Tensao;
float ValorCorrente;
void setup(){
    Serial.begin(9600);
}
void loop(){
    Tensao = analogRead(SensorCorrentePin * 5)/1024;//Leitura analógica do valor de entrada do sensor
    Tensao = Tensao - 2.5 + 0.007;/* Normalização para o sensor. 
    Desccontando 2.5, pois será quando o sensor marcar 0 e adicionando 0.007, já que a durante o processo
    ocorre a queda desse valor*/  
    ValorCorrente = Tensao/0.04;// Variação de 40 mV por A
    Serial.print(ValorCorrente);
    Serial.print("A");
    delay(1000);
}