namespace Frobnication {
	class Frobincate
	{
		public:
			/** some functiontion
			 *
			 * @param some_param	a parameter
			 */
			Frobincate ();

			/** let's do it.
			 */
			void frobnify ();

			/** confirm frobnification
			 *
			 * This method needs a confirmation before frobnifying anything.
			 *
			 * @param really set to true to frobnify
			 */
			void frobnify (bool really);

			/** test for frobnication.
			 *
			 * @param with_space some integer argument with whitespace in the defition
			 * @param a "char* a" vs "char *a" declaration
			 * @returns true when if frobnified.
			 */
			bool letsdoit(int   with_space, char* a);

			/** a static class member function */
			static void static_frobnification ();

			bool frobnified; ///<   some data
			static int frobbed; ///<some static data
	};
}
