#include <stdio.h>
#include <curl/curl.h>
#include <json-c/json.h>
#include "rlutil.h"


int main()
{
    CURL *curl;
    FILE *fp ,*tmp;
    int result;
    char buffer[1024];
    double averge;

    fp = fopen("test.json","w");
    curl = curl_easy_init();
    curl_easy_setopt(curl, CURLOPT_URL,"http://api.nbp.pl/api/exchangerates/tables/c/today/?format=json");
    curl_easy_setopt(curl, CURLOPT_WRITEDATA,fp);

    result = curl_easy_perform(curl);
    curl_easy_cleanup(curl);
    fclose(fp);
    struct json_object *parsed_json,*parsed_json2;
    struct json_object *rates;
    struct json_object *ratelist;
    struct json_object *rate;
    struct json_object *currency;
    struct json_object *code;
    struct json_object *bid;
    struct json_object *ask;
    struct json_object *mid;
    struct json_object *rates_tmp;
    struct json_object *rate_tmp;

    fp = fopen("test.json","r");
    fread(buffer, 1024 ,1,fp);

    fclose(fp);

    parsed_json = json_tokener_parse(buffer);



    rates = json_object_array_get_idx(parsed_json,0);
    json_object_object_get_ex(rates,"rates",&ratelist);
     rate = json_object_array_get_idx(ratelist,0);
    json_object_object_get_ex(rate,"currency",&currency);
    json_object_object_get_ex(rate,"bid",&bid);
    json_object_object_get_ex(rate,"ask",&ask);
    setColor(WHITE);
    printf(" currency\t  |     bid     |     ask\n");

    tmp = fopen("roboczy.json", "w");
    curl = curl_easy_init();
    curl_easy_setopt(curl,CURLOPT_URL,"http://api.nbp.pl/api/exchangerates/rates/a/usd/last/10/?format=json");
    curl_easy_setopt(curl,CURLOPT_WRITEDATA,tmp);
    result = curl_easy_perform(curl);
    curl_easy_cleanup(curl);
    fclose(tmp);
    tmp = fopen("roboczy.json","r");
    fread(buffer,1024,1,tmp);
    fclose(tmp);
    parsed_json2 = json_tokener_parse(buffer);

    json_object_object_get_ex(parsed_json2,"rates",&rates_tmp);
    rate_tmp = json_object_array_get_idx(rates_tmp,8);
    json_object_object_get_ex(rate_tmp,"mid",&mid);

    averge = (json_object_get_double(bid) + json_object_get_double(ask))/2;

    for(int i = 0 ; i < 10; ++i)
    {
      printf("-------");
    }
    printf("\n");
    setColor(YELLOW);
    printf("%s ",json_object_get_string(currency));
    setColor(WHITE);
    printf("| ");
    if(averge > json_object_get_double(mid))
    setColor(GREEN);
    else setColor(RED);
    printf("bid= %s ",json_object_get_string(bid));
    setColor(WHITE);
    printf("| ");
    if(averge < json_object_get_double(mid))
    setColor(GREEN);
    else setColor(RED);
    printf("ask = %s\n",json_object_get_string(ask));
    setColor(WHITE);



    rate = json_object_array_get_idx(ratelist,3);
    json_object_object_get_ex(rate,"currency",&currency);
    json_object_object_get_ex(rate,"bid",&bid);
    json_object_object_get_ex(rate,"ask",&ask);

    tmp = fopen("roboczy.json", "w");
    curl = curl_easy_init();
    curl_easy_setopt(curl,CURLOPT_URL,"http://api.nbp.pl/api/exchangerates/rates/a/eur/last/10/?format=json");
    curl_easy_setopt(curl,CURLOPT_WRITEDATA,tmp);
    result = curl_easy_perform(curl);
    curl_easy_cleanup(curl);
    fclose(tmp);
    tmp = fopen("roboczy.json","r");
    fread(buffer,1024,1,tmp);
    fclose(tmp);
    parsed_json2 = json_tokener_parse(buffer);

    json_object_object_get_ex(parsed_json2,"rates",&rates_tmp);
    rate_tmp = json_object_array_get_idx(rates_tmp,8);
    json_object_object_get_ex(rate_tmp,"mid",&mid);

    averge = (json_object_get_double(bid) + json_object_get_double(ask))/2;

    for(int i = 0 ; i < 10; ++i)
    {
      printf("-------");
    }
    printf("\n");
    setColor(YELLOW);
    printf("%s \t\t  ",json_object_get_string(currency));
    setColor(WHITE);
    printf("| ");
    if(averge > json_object_get_double(mid))
    setColor(GREEN);
    else setColor(RED);
    printf("bid= %s ",json_object_get_string(bid));
    setColor(WHITE);
    printf("| ");
    if(averge < json_object_get_double(mid))
    setColor(GREEN);
    else setColor(RED);
    printf("ask = %s\n",json_object_get_string(ask));
    setColor(WHITE);

     rate = json_object_array_get_idx(ratelist,5);
    json_object_object_get_ex(rate,"currency",&currency);
    json_object_object_get_ex(rate,"bid",&bid);
    json_object_object_get_ex(rate,"ask",&ask);

    tmp = fopen("roboczy.json", "w");
    curl = curl_easy_init();
    curl_easy_setopt(curl,CURLOPT_URL,"http://api.nbp.pl/api/exchangerates/rates/a/chf/last/10/?format=json");
    curl_easy_setopt(curl,CURLOPT_WRITEDATA,tmp);
    result = curl_easy_perform(curl);
    curl_easy_cleanup(curl);
    fclose(tmp);
    tmp = fopen("roboczy.json","r");
    fread(buffer,1024,1,tmp);
    fclose(tmp);
    parsed_json2 = json_tokener_parse(buffer);

    json_object_object_get_ex(parsed_json2,"rates",&rates_tmp);
    rate_tmp = json_object_array_get_idx(rates_tmp,8);
    json_object_object_get_ex(rate_tmp,"mid",&mid);

    averge = (json_object_get_double(bid) + json_object_get_double(ask))/2;

    for(int i = 0 ; i < 10; ++i)
    {
      printf("-------");
    }
    printf("\n");
    setColor(YELLOW);
    printf("%s ",json_object_get_string(currency));
    setColor(WHITE);
    printf("| ");
    if(averge > json_object_get_double(mid))
    setColor(GREEN);
    else setColor(RED);
    printf("bid= %s ",json_object_get_string(bid));
    setColor(WHITE);
    printf("| ");
    if(averge < json_object_get_double(mid))
    setColor(GREEN);
    else setColor(RED);
    printf("ask = %s\n",json_object_get_string(ask));
    setColor(WHITE);

     rate = json_object_array_get_idx(ratelist,6);
    json_object_object_get_ex(rate,"currency",&currency);
    json_object_object_get_ex(rate,"bid",&bid);
    json_object_object_get_ex(rate,"ask",&ask);

    tmp = fopen("roboczy.json", "w");
    curl = curl_easy_init();
    curl_easy_setopt(curl,CURLOPT_URL,"http://api.nbp.pl/api/exchangerates/rates/a/gbp/last/10/?format=json");
    curl_easy_setopt(curl,CURLOPT_WRITEDATA,tmp);
    result = curl_easy_perform(curl);
    curl_easy_cleanup(curl);
    fclose(tmp);
    tmp = fopen("roboczy.json","r");
    fread(buffer,1024,1,tmp);
    fclose(tmp);
    parsed_json2 = json_tokener_parse(buffer);

    json_object_object_get_ex(parsed_json2,"rates",&rates_tmp);
    rate_tmp = json_object_array_get_idx(rates_tmp,8);
    json_object_object_get_ex(rate_tmp,"mid",&mid);

    averge = (json_object_get_double(bid) + json_object_get_double(ask))/2;

    for(int i = 0 ; i < 10; ++i)
    {
      printf("-------");
    }
    printf("\n");
    setColor(YELLOW);
    printf("%s \t  ",json_object_get_string(currency));
    setColor(WHITE);
    printf("| ");
    if(averge > json_object_get_double(mid))
    setColor(GREEN);
    else setColor(RED);
    printf("bid= %s ",json_object_get_string(bid));
    setColor(WHITE);
    printf("| ");
    if(averge < json_object_get_double(mid))
    setColor(GREEN);
    else setColor(RED);
    printf("ask = %s\n",json_object_get_string(ask));
    setColor(WHITE);

    rate = json_object_array_get_idx(ratelist,10);
    json_object_object_get_ex(rate,"currency",&currency);
    json_object_object_get_ex(rate,"bid",&bid);
    json_object_object_get_ex(rate,"ask",&ask);

    tmp = fopen("roboczy.json", "w");
    curl = curl_easy_init();
    curl_easy_setopt(curl,CURLOPT_URL,"http://api.nbp.pl/api/exchangerates/rates/a/nok/last/10/?format=json");
    curl_easy_setopt(curl,CURLOPT_WRITEDATA,tmp);
    result = curl_easy_perform(curl);
    curl_easy_cleanup(curl);
    fclose(tmp);
    tmp = fopen("roboczy.json","r");
    fread(buffer,1024,1,tmp);
    fclose(tmp);
    parsed_json2 = json_tokener_parse(buffer);

    json_object_object_get_ex(parsed_json2,"rates",&rates_tmp);
    rate_tmp = json_object_array_get_idx(rates_tmp,8);
    json_object_object_get_ex(rate_tmp,"mid",&mid);

    averge = (json_object_get_double(bid) + json_object_get_double(ask))/2;

    for(int i = 0 ; i < 10; ++i)
    {
      printf("-------");
    }
    printf("\n");
    setColor(YELLOW);
    printf("%s   ",json_object_get_string(currency));
    setColor(WHITE);
    printf("| ");
    if(averge > json_object_get_double(mid))
    setColor(GREEN);
    else setColor(RED);
    printf("bid= %s ",json_object_get_string(bid));
    setColor(WHITE);
    printf("| ");
    if(averge < json_object_get_double(mid))
    setColor(GREEN);
    else setColor(RED);
    printf("ask = %s\n",json_object_get_string(ask));
    setColor(WHITE);

    rate = json_object_array_get_idx(ratelist,11);
    json_object_object_get_ex(rate,"currency",&currency);
    json_object_object_get_ex(rate,"bid",&bid);
    json_object_object_get_ex(rate,"ask",&ask);

    tmp = fopen("roboczy.json", "w");
    curl = curl_easy_init();
    curl_easy_setopt(curl,CURLOPT_URL,"http://api.nbp.pl/api/exchangerates/rates/a/sek/last/10/?format=json");
    curl_easy_setopt(curl,CURLOPT_WRITEDATA,tmp);
    result = curl_easy_perform(curl);
    curl_easy_cleanup(curl);
    fclose(tmp);
    tmp = fopen("roboczy.json","r");
    fread(buffer,1024,1,tmp);
    fclose(tmp);
    parsed_json2 = json_tokener_parse(buffer);

    json_object_object_get_ex(parsed_json2,"rates",&rates_tmp);
    rate_tmp = json_object_array_get_idx(rates_tmp,8);
    json_object_object_get_ex(rate_tmp,"mid",&mid);

    averge = (json_object_get_double(bid) + json_object_get_double(ask))/2;

    for(int i = 0 ; i < 10; ++i)
    {
      printf("-------");
    }
    printf("\n");
    setColor(YELLOW);
    printf("%s   ",json_object_get_string(currency));
    setColor(WHITE);
    printf("| ");
    if(averge > json_object_get_double(mid))
    setColor(GREEN);
    else setColor(RED);
    printf("bid= %s ",json_object_get_string(bid));
    setColor(WHITE);
    printf("| ");
    if(averge < json_object_get_double(mid))
    setColor(GREEN);
    else setColor(RED);
    printf("ask = %s\n",json_object_get_string(ask));
    setColor(WHITE);








    return 0;
}

