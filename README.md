Shift Сдвиг массива влево


![image](https://github.com/AlexandrZarubin/Arrays/assets/156585474/e4bc1e4a-39a6-47f7-94c1-7df1ca24830d)

Суть сдвига копировать в левый элемент массива правый 
но так как самый первый элемент под индексом 0 теряется сохраняем его в буфер и как только самый последний элемент скопировался в левый, начинаем копировать из буфера в последний элемент массива 


![image](https://github.com/AlexandrZarubin/Arrays/assets/156585474/f742d885-4ecd-462d-a418-6ca0da1dfad9)

можно элементы поменять местами битовыми операциями XOR, если биты разные то 1, если одинаковые то 0
![image](https://github.com/AlexandrZarubin/Arrays/assets/156585474/fe609796-8e1a-48b9-86d9-6e7cb0ae68a7)

пример на обычных переменых 

![image](https://github.com/AlexandrZarubin/Arrays/assets/156585474/09df5254-0e68-4613-a337-9bc462900db1)
![image](https://github.com/AlexandrZarubin/Arrays/assets/156585474/90633f5f-b429-4c90-bdcc-4dc0ba39441d)


Также и с массивом 

![image](https://github.com/AlexandrZarubin/Arrays/assets/156585474/6c8a2f9e-135b-4282-adfd-85ba1eed5362)
![image](https://github.com/AlexandrZarubin/Arrays/assets/156585474/6b4e39f3-2823-4bf6-86f8-31bb2ba9f276)
![image](https://github.com/AlexandrZarubin/Arrays/assets/156585474/8b8ae67e-d557-4138-8b31-4193c898d06d)

И так постеппено первый элемент сдвигается в самый конец  




