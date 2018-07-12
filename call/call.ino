char phone_no[]="9955977260027";

void setup()
{
Serial.begin(9600);  
delay(200);
Serial.println("AT");
delay(1000);
Serial.print("ATD");
Serial.println(phone_no);
//Serial.println(";");
delay(10000);
Serial.println("ATH");
}

void loop()
{
}
