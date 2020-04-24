#pragma once

#include "Core.h"

namespace Daisuki {

		class DAISUKI_API Application
		{
		public:
			Application();
			virtual ~Application();

			void Run();
		};

		// To be defined in client
		Application* CreateApplication();

}