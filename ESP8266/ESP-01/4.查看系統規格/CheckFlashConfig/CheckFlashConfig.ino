/* 
 ESP8266 CheckFlashConfig by Markus Sattler
 
 This sketch tests if the EEPROM settings of the IDE match to the Hardware
 
 */

void setup(void) {
    Serial.begin(115200);
}

void loop() {

    uint32_t realSize = ESP.getFlashChipRealSize();
    uint32_t ideSize = ESP.getFlashChipSize();
    FlashMode_t ideMode = ESP.getFlashChipMode();

    Serial.printf("Chip id:   %08X\n", ESP.getFlashChipId());
    Serial.printf("Memory size: %u\n", realSize);
    Serial.printf("SPI Flash Size: %u\n", ideSize);
    Serial.printf("SPI Speed: %u\n", ESP.getFlashChipSpeed());
    Serial.printf("SPI Mode:  %s\n\n", (ideMode == FM_QIO ? "QIO" : ideMode == FM_QOUT ? "QOUT" : ideMode == FM_DIO ? "DIO" : ideMode == FM_DOUT ? "DOUT" : "UNKNOWN"));
    /*
    
    
    */
    delay(5000);
}
/*


SPI時序詳解
SPI總線是Motorola公司推出的三線同步接口，同步串行3線方式進行通信:
一條時鐘線SCK，一條數據輸入線MOSI，一條數據輸出線MISO;
用於CPU與各種外圍器件進行全雙工、同步串列通訊。SPI主要特點有:可以同時發出和接收串行數據;可以當作主機或從機工作;提供頻率可編程時鐘;發送結束中斷標誌;寫衝突保護;總線競爭保護等。
SPI總線有四種工作方式(SP0, SP1, SP2, SP3)，其中使用的最為廣泛的是SPI0和SPI3方式。
SPI模塊為了和外部設備進行數據交換，根據外部設備工作要求，其輸出串行同步時鐘極性和相位可以進行配置，時鐘極性(CPOL)對傳輸協議沒有重大的影響。
如果CPOL=0，串列同步時鐘的空閒狀態為低電平；如果CPOL=1，串列同步時鐘的空閒狀態為高電平。
時鐘相位(CPHA)能夠配置用於選擇兩種不同的傳輸協議之一進行數據傳輸。如果CPHA=0，在串行同步時鐘的第一個Rising edge(上升或下降)數據被採樣；
如果CPHA=1，在串行同步時鐘的第二個Rising edge(上升或下降)數據被採樣。 

Mode 0 CPOL=0, CPHA=0 
Mode 1 CPOL=0, CPHA=1
Mode 2 CPOL=1, CPHA=0 
Mode 3 CPOL=1, CPHA=1


時鐘極性CPOL: 即SPI空閒時，時鐘信號SCLK的電平（1:空閒時高電平; 0:空閒時低電平）
時鐘相位CPHA: 即SPI在SCLK第幾個邊沿開始採樣（0:第一個邊沿開始; 1:第二個邊沿開始）

*/


