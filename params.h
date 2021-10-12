//wifi network
char wifi_ssid[] = "mywifi";
//wifi password
char wifi_pass[] = "mypass";
//timezone
char timezone[5] = "-8" ; // in theory, this is set by the location in openweathermap
//use 24h time format
char military[3] = "N";     // 24 hour mode? Y/N
//use metric data
char u_metric[3] = "N";     // use metric for units? Y/N
//date format
char date_fmt[7] = "M.D.Y"; // date format: D.M.Y or M.D.Y or M.D or D.M or D/M/Y.. looking for trouble
//open weather map api key 
String apiKey   = "mykey"; //e.g a hex string like "abcdef0123456789abcdef0123456789"
//the city you want the weather for 
String location = "MY, Location"; //e.g. "Paris,FR"
