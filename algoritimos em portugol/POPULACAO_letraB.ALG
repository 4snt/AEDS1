algoritmo "Populacao"
var
   paisa, paisb: real
   numerodeanos: inteiro

inicio
   paisa <- 90000000
   paisb <- 200000000
   numerodeanos <- 0

   enquanto paisa <= paisb faca
      paisa <- paisa + (paisa * 0.03)
      paisb <- paisb + (paisb * 0.015)
      numerodeanos <- numerodeanos + 1
      escreval ("No ano:", numerodeanos,"A popula��o do pais A sera= ", paisa, "a popula��o do pais B sera=", paisb)
   fimenquanto

   escreval("N�mero de anos necess�rios para que a popula��o de A ultrapasse B: ", numerodeanos)
fimalgoritmo