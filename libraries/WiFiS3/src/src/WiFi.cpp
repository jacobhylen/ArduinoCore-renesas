#include "WiFi.h"


/* -------------------------------------------------------------------------- */
WiFi::WiFi() : _timeout(50000), ni(nullptr) {
}
/* -------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------- */
const char* WiFi::firmwareVersion() {
/* -------------------------------------------------------------------------- */
   return WiFi_FIRMWARE_LATEST_VERSION;
}


/* -------------------------------------------------------------------------- */
int WiFi::begin(const char* ssid) {
/* -------------------------------------------------------------------------- */   
  return 0;
}

/* -------------------------------------------------------------------------- */
int WiFi::begin(const char* ssid, const char *passphrase) {
/* -------------------------------------------------------------------------- */   
  return 0;
}

/* passphrase is needed so a default one will be set */
/* -------------------------------------------------------------------------- */
uint8_t WiFi::beginAP(const char *ssid) {
/* -------------------------------------------------------------------------- */   
  return 0;
}

/* -------------------------------------------------------------------------- */
uint8_t WiFi::beginAP(const char *ssid, uint8_t channel) {
/* -------------------------------------------------------------------------- */   
  return 0;
}

/* -------------------------------------------------------------------------- */
uint8_t WiFi::beginAP(const char *ssid, const char* passphrase) {
/* -------------------------------------------------------------------------- */   
  return 0;
}

/* -------------------------------------------------------------------------- */
uint8_t WiFi::beginAP(const char *ssid, const char* passphrase, uint8_t channel) {
/* -------------------------------------------------------------------------- */   
  return 0;
}



/* -------------------------------------------------------------------------- */
void WiFi::config(IPAddress local_ip) {
/* -------------------------------------------------------------------------- */
}

/* -------------------------------------------------------------------------- */
void WiFi::_config(IPAddress local_ip, IPAddress gateway, IPAddress subnet) {
/* -------------------------------------------------------------------------- */    
}

/* -------------------------------------------------------------------------- */
void WiFi::config(IPAddress local_ip, IPAddress dns_server) {
/* -------------------------------------------------------------------------- */   
}

/* -------------------------------------------------------------------------- */
void WiFi::config(IPAddress local_ip, IPAddress dns_server, IPAddress gateway) {
/* -------------------------------------------------------------------------- */   
}

/* -------------------------------------------------------------------------- */
void WiFi::config(IPAddress local_ip, IPAddress dns_server, IPAddress gateway, IPAddress subnet) {
/* -------------------------------------------------------------------------- */
}

/* -------------------------------------------------------------------------- */
void WiFi::setDNS(IPAddress dns_server1) {
/* -------------------------------------------------------------------------- */   
}

/* -------------------------------------------------------------------------- */
void WiFi::setDNS(IPAddress dns_server1, IPAddress dns_server2) {
/* -------------------------------------------------------------------------- */   
}

/* -------------------------------------------------------------------------- */
void WiFi::setHostname(const char* name) {
/* -------------------------------------------------------------------------- */   
}

/* -------------------------------------------------------------------------- */
int WiFi::disconnect() {
/* -------------------------------------------------------------------------- */   
}

/* -------------------------------------------------------------------------- */
void WiFi::end(void) {
/* -------------------------------------------------------------------------- */   

}

/* -------------------------------------------------------------------------- */
uint8_t* WiFi::macAddress(uint8_t* mac) {
/* -------------------------------------------------------------------------- */   
  return 0;
}

/* -------------------------------------------------------------------------- */
int8_t WiFi::scanNetworks() {
/* -------------------------------------------------------------------------- */   
  return 0;
}
 
/* -------------------------------------------------------------------------- */   
IPAddress WiFi::localIP() {
/* -------------------------------------------------------------------------- */   
  return 0;
}

/* -------------------------------------------------------------------------- */
IPAddress WiFi::subnetMask() {
/* -------------------------------------------------------------------------- */   
  return IPAddress(0,0,0,0);
}

/* -------------------------------------------------------------------------- */
IPAddress WiFi::gatewayIP() {
/* -------------------------------------------------------------------------- */   
  return IPAddress(0,0,0,0);
}

/* -------------------------------------------------------------------------- */
const char* WiFi::SSID(uint8_t networkItem) {
/* -------------------------------------------------------------------------- */
  return nullptr;
}
/* -------------------------------------------------------------------------- */ 

/* -------------------------------------------------------------------------- */
int32_t WiFi::RSSI(uint8_t networkItem) {
  return 0;
}
/* -------------------------------------------------------------------------- */ 

/* -------------------------------------------------------------------------- */
uint8_t WiFi::encryptionType(uint8_t networkItem) {
  return 0;
}
/* -------------------------------------------------------------------------- */ 

/* -------------------------------------------------------------------------- */
uint8_t* WiFi::BSSID(uint8_t networkItem, uint8_t* bssid) {
  return 0;
}
/* -------------------------------------------------------------------------- */ 

/* -------------------------------------------------------------------------- */
uint8_t WiFi::channel(uint8_t networkItem) { 
  return 0;
}
/* -------------------------------------------------------------------------- */ 

/* -------------------------------------------------------------------------- */ 
const char* WiFi::SSID() {
/* -------------------------------------------------------------------------- */    
  return ""; 
}

/* -------------------------------------------------------------------------- */ 
uint8_t* WiFi::BSSID(uint8_t* bssid) {
/* -------------------------------------------------------------------------- */    
  return nullptr;
}

/* -------------------------------------------------------------------------- */ 
int32_t WiFi::RSSI() {
/* -------------------------------------------------------------------------- */    
  return 0;
}

/* -------------------------------------------------------------------------- */ 
uint8_t WiFi::encryptionType() {
/* -------------------------------------------------------------------------- */    
  return 0;
}

/* -------------------------------------------------------------------------- */
uint8_t WiFi::status() {
/* -------------------------------------------------------------------------- */   
  return 0;
}

/* -------------------------------------------------------------------------- */
int WiFi::hostByName(const char* aHostname, IPAddress& aResult) {
/* -------------------------------------------------------------------------- */   
  return 0;
}

/* -------------------------------------------------------------------------- */
void WiFi::lowPowerMode() {
/* -------------------------------------------------------------------------- */   
}

/* -------------------------------------------------------------------------- */
void WiFi::noLowPowerMode() {
/* -------------------------------------------------------------------------- */   
}

uint8_t WiFi::reasonCode() {
  return 0;
}

unsigned long WiFi::getTime() {
  return 0;
}



void WiFi::setTimeout(unsigned long timeout) {
   (void)(timeout);  
}


WiFi WiFi;

