/*
 * ========================= esrc_chunkData.h ==========================
 *                          -- tpr --
 *                                        CREATE -- 2019.04.19
 *                                        MODIFY --
 * ----------------------------------------------------------
 */
#ifndef TPR_ESRC_CHUNK_DATA_H_
#define TPR_ESRC_CHUNK_DATA_H_

//-------------------- Engine --------------------//
#include "ChunkData.h"
#include "chunkKey.h"


namespace esrc {//------------------ namespace: esrc -------------------------//

ChunkData *atom_insert_new_chunkData( chunkKey_t _chunkKey );
void atom_erase_from_chunkDatas( chunkKey_t _chunkKey );


const ChunkData *atom_get_chunkDataPtr( chunkKey_t _chunkKey );


bool atom_is_chunkDataFlags_empty();
void atom_push_back_2_chunkDataFlags( chunkKey_t _chunkKey );
chunkKey_t atom_pop_from_chunkDataFlags();


}//---------------------- namespace: esrc -------------------------//
#endif
