unsigned long start_time;  // 保存程序开始时的时间

void setup(void)
{
  Serial.begin(115200);
  start_time = millis();  // 记录程序开始时的时间
  Serial.print("Elapsedtime(ms):,");
  Serial.print("H2,");
  Serial.print("NO2,");
  Serial.print("H2S,");
  Serial.print("C2H6O,");
  Serial.print("VOC,");
  Serial.print("CO,");
  Serial.print("odor,");
  Serial.print("CH4,");
  Serial.print("NH3,");
  Serial.println("SMOKE");
}

void loop(void)
{
  unsigned long current_time = millis();  // 获取当前时间
  unsigned long elapsed_time = current_time - start_time;  // 计算自程序开始以来经过的毫秒数
  
  float sensorValue0 = analogRead(A0);
  float sensorValue1 = analogRead(A1);
  float sensorValue2 = analogRead(A2);
  float sensorValue3 = analogRead(A3);
  float sensorValue4 = analogRead(A4);
  float sensorValue5 = analogRead(A5);
  float sensorValue6 = analogRead(A6);
  float sensorValue7 = analogRead(A7);
  float sensorValue8 = analogRead(A8);
  float sensorValue9 = analogRead(A9);
  Serial.print(String(elapsed_time)+",");
  Serial.print(String(sensorValue0)+",");
  Serial.print(String(sensorValue1)+",");
  Serial.print(String(sensorValue2)+",");
  Serial.print(String(sensorValue3)+",");
  Serial.print(String(sensorValue4)+",");
  Serial.print(String(sensorValue5)+",");
  Serial.print(String(sensorValue6)+",");
  Serial.print(String(sensorValue7)+",");
  Serial.print(String(sensorValue8)+",");
  Serial.println(String(sensorValue9));
  delay(100);
}
