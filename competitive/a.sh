#競技プログラミングの鉄則URLを取得
URL=https://atcoder.jp/contests/tessoku-book/tasks

curl -fsSL ${URL} | 
grep -oP '(?<=<td class="text-center no-break"><a href=").*(?=">)' >title.txt

curl -fsSL ${URL} |
grep -oP '(?<=<td class="text-center no-break"><a href=").*(?=/a>)'|
grep -oP '(?<=">).*(?=<)'>list.txt




# 区切り文字を改行コードに指定
IFS=$'\n'
 
# ファイルを配列に読み込む
file=(`cat title.txt`)
name=(`cat list.txt`)


# 行ごとに繰り返し処理を実行
for((i=0; i<${#file[@]}; i++))
do
    mkdir ${name[i]}
    cd ${name[i]}
    oj d "https://atcoder.jp"${file[i]}
    cd ..

done

rm title.txt
rm list.txt
