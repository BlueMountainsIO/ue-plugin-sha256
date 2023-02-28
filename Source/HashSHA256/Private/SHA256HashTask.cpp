// Copyright 2023 Blue Mountains GmbH. All Rights Reserved.

#include "SHA256HashTask.h"
#include "SHA256Hash.h"

void FSHA256FileHasherTask::DoWork(void)
{
	// Pool thread

	FSHA256Hash Hash;
	Hash.FromFile(FullPathOnDisk);

	ResultQueue->Enqueue({ FullPathOnDisk, Hash.GetHash() });

	ThreadScaleCounter->Decrement();
}
