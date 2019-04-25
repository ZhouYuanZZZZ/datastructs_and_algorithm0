#include "../../../common/utils/utils.h"
#include "seq_queue.h"

int mainsss(){

    SeqQueue* queue = createSeqQueue();

    for(int i=0;i<7;i++){
        enSeqQueue(queue,i);
    }

    showSeqQueue(queue);

    enSeqQueue(queue,11);
    enSeqQueue(queue,111);
    enSeqQueue(queue,222);
    deSeqQueue(queue);

    showSeqQueue(queue);

    return 0;
}