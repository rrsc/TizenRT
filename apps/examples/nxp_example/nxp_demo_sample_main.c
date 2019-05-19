/* ****************************************************************
*
* Copyright 2019 NXP Semiconductors All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*      http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*
******************************************************************/

#include <tinyara/config.h>

#include <stdio.h>

#ifdef CONFIG_BUILD_KERNEL
int main(int argc, FAR char *argv[])
#else
int nxp_demo_sample_main(int argc, char *argv[])
#endif
{
	printf("[New] nxp_demo_sample!!\n");

	return 0;
}
