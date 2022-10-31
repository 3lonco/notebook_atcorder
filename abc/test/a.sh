alpha[0]="z"
alpha[1]="a"
alpha[2]="b"
alpha[3]="c"
alpha[4]="d"
alpha[5]="e"
alpha[6]="f"
alpha[7]="g"
alpha[8]="h"



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

    for((j=1;j<9;j++))
    do
        if [ $i -lt 20 ];then
            url="https://atcoder.jp/contests/"${char}"/tasks/"${char}"_"${j}
        else
            url="https://atcoder.jp/contests/"${char}"/tasks/"${char}"_"${alpha[j]}
        fi
        flag=$(curl -v ${url} 2>&1 1>/dev/null | awk '{if($2~"HTTP") print $3}')
        if [ $flag -eq 200 ];then
            mkdir ${alpha[j]}
            #~/abc/abc001/a/
            cd ${alpha[j]}
            oj d ${url}
            #~/abc/abc001
            cd ..   
        fi    
    done
    #~/abc/
    cd ..
done
