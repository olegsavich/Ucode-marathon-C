if [ $1 = -c ]
then 
    tar -cvf $2 ${@:3}
elif [ $1 = -e ]
then
    tar -xvf $2
fi