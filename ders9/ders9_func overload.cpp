int foo(int);


double foo(int); //Geçersiz!,



int main()
{
	foo();
	return 0;
}

/*

Yukarıdaki her iki bildirim de geçerli olsaydı, hangi foo işlevinin çağrıldığı nasıl anlaşılırdı?
İşlevlerin parametre değişkenlerinin sayısı ile, her bir parametre değişkeninin türünü kapsayan bilgiye
“işlevin imzası” denir. İşlevin geri dönüş değerinin türü bilgisi, işlevin imzasının bir parçası değildir

*/