# !/bin/sh

# How to use it
# Remove Front Matter
# Cleanup any Special Chars -,.?()[] etc
# ./script <Input File>

OUTPUT_FOLDER=docs

if [ $# -lt 1 ]; then
    echo "ERROR: Usage: ./script <Input File>"
    exit 1
fi

FC=0
SFC=0
#FILE_COUNTER=0;

while read f; do

    case ${f:0:3} in
    '###')
        FC=$((${FC} + 2))
        F_BASE=${f:4};

        if [ $FC -lt 10 ]; 
        then
            F_STR=0$FC-${F_BASE};
        else
            F_STR=$FC-${F_BASE};
        fi
        F_STR1=${F_STR// /-};
        echo $F_STR1;

        # Reset SFC
        SFC=0;
        ;;
    esac

    case ${f:0:1} in
    '-')
        SFC=$((${SFC} + 2));
        SF_BASE=${f:2};

        if [ $SFC -lt 10 ]; 
        then
            SF_STR=0$SFC-${SF_BASE};
        else
            SF_STR=$SFC-${SF_BASE};
        fi
        SF_STR1=${SF_STR// /-};
        echo $SF_STR1;

        # Create Files
        mkdir -p ${OUTPUT_FOLDER}/$F_STR1/$SF_STR1;

        FILEPATH=${OUTPUT_FOLDER}/${F_STR1}/${SF_STR1};
        FILEBASENAME=${SF_BASE// /-};
        FILE=${FILEPATH}/${FILEBASENAME}.md

        echo "${FILE}";
        # Create Front Mater
        # ---
        # id: about-me
        # title: About Me
        # sidebar_label: About Me
        # ---
        
        echo "---" > ${FILE};
        echo "id: ${FILEBASENAME}" >> ${FILE};
        echo "title: ${SF_BASE}" >> ${FILE};
        echo "sidebar_label: ${SF_BASE}" >> ${FILE};
        echo "---" >> ${FILE};
        echo "" >> ${FILE};
        echo "" >> ${FILE};
        echo "#" >> ${FILE};

        #echo "---" > ./docs/$F_STR1/$SF_STR1/${SF_BASE}.md;

        #touch ./docs/$F_STR1/$SF_STR1/${SF_BASE}.md;

        ;;
    esac

done \
    <$1
