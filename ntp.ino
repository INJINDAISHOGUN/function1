void ntpblink(int value){ //รับค่าเข้า ไม่ส่งค่าออก
  digitalWrite(ntp, LOW);
  delay(value);
  digitalWrite(ntp, HIGH);
  delay(value);
}
