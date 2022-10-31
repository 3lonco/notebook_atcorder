alpha[0]="z"
alpha[1]="a"
alpha[2]="b"
alpha[3]="c"
alpha[4]="d"
alpha[5]="e"
alpha[6]="f"




# 行ごとに繰り返し処理を実行
for((i=1; i<275; i++))
do
    if [ $i -lt 10 ];then
        char="abc00${i}"
    elif [ $i -lt 100 ];then
        char="abc0${i}"
    else
        char="abc${i}"
    fi
    #echo ${char} #abc274
    #abc274
    mkdir ${char}
    #~/abc/abc274
    cd ${char}



    
    
    
    for((j=1;j<7;j++))
    do
        mkdir ${alpha[j]}
        #~/abc/abc274/a/
        cd ${alpha[j]}
        if [ $i -lt 20 ];then
            oj d "https://atcoder.jp/contests/"${char}"/tasks/"${char}"_"${j}
        else
            oj d "https://atcoder.jp/contests/"${char}"/tasks/"${char}"_"${alpha[j]}
        fi
        cd ..    
    done
    #~/abc/
    cd ..
done
