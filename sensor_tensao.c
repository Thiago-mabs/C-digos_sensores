const int SensorTensaoPin=A1; //Declarando a porta que o sensor está localizado
float TensaoEntrada;
float TensaoSaida;
float ValorTensao;
void setup(){
    Serial.begin(9600);
}
void loop(){
    ValorTensao = analogRead(SensorTensaoPin); //Leitura analógica do valor de entrada do sensor
    TensaoSaida = (ValorTensao * 5)/1024;     // Conversão para o valor de sáida (variando de 0-5v)
    TensaoEntrada = TensaoSaida * 5;         // Convesão para o valor de entrada (valor real)
    Serial.print("Tensão: ");
    Serial.print(TensaoSaida);
    Serial.print("V"); 
    delay(1000);
}