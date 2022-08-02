%Algoritmo de Retropropagación

clc
clear all
p= [149 122 121 905 901 121 136 120 119 497 124 120 119 119 557 121; 
    369 208 113 953 943 422 462 435 111 964 285 290 186 109 375 109; 
    384 802 129 371 370 423 439 872 237 539 128 125 591 123 127 123;
    120 776 115 109 110 112 113 682 113 113 111 109 281 110 112 110;
    191 158 158 830 823 374 341 156 157 596 567 158 155 157 589 478;
    790 388 242 700 697 823 866 427 445 850 846 602 165 217 117 119;
    697 677 729 222 224 702 753 719 800 381 403 410 124 333 96 97;
    131 786 817 117 118 274 228 619 624 119 121 126 121 124 119 120; 
    117 97  98  98  99  98  118 96  98  100 647 97  96  96  98  430;
    472 114 197 112 113 451 569 111 449 284 923 295 112 187 110 372;         
    533 146 979 135 137 404  602 181 1009 142 561 141 138 651 137 157; 
    187 176 1023 160 162 166 169 169 917 165 168 166 165 372 164 166]; %Entrada 2 bd


 t=[ 1 1 1 1 1 1 0 0 0 0 0 0 0 0 0 0; % CUADRADO
     0 0 0 0 0 0 1 1 1 1 1 0 0 0 0 0; % CIRCULO
     0 0 0 0 0 0 0 0 0 0 0 1 1 1 1 1]; % TRIANGULO
 
% entrenamiento con retropropagacion
%[2 1] valores maximos y minimo de la entrada y numero de neuronas
% en la primer capa y segunda capa y funciones de activación
% una de sus capas
 
net=newff(minmax(p),[12 3],{'tansig','purelin'},'traincgf');
net=init(net);
net.trainParam.epochs = 500 ; %numero de epocas maximas que se van a entrenar
net.trainParam.goal=1e-6; % error que establecemos muy pequeños
net=train(net,p,t);     % entradas y salidas
a=sim(net,p)            % resultado
pesos1=net.iw{1,1}      %pesos de la primera capa
bias1=net.b{1,1}        %bia de la primera capa
peso2=net.lw{2,1}       % peso de la segunda capa
bias2=net.b{2,1}        % bia de la segunda capa

    



